#include "functions.h"
#include "logging.h"
#include <TimerOne.h>  // Include for Timer ISR configuration
#include <SPI.h>

// Global variables - only to be accessed within this file
int speed = 0;                // Current speed
int throttle = 0;             // Current throttle percentage
int power = 0;                // Current power value
int temp = 0;                 // Current temperature
int batterySOC = 0;           // Battery state of charge of the e-bike
int regenMethod = 1;          // State of active regenerative braking
bool activatedRegen = false;  // Regenerative braking engaged
bool logging_enabled;
int log_counter = 0;

LoggingData LD;

// State variables for debouncings
volatile bool previousRegenState = HIGH;             // Previous state of the REGEN_METHOD_TOGGLE pin
volatile bool currentIncreaseThrottleState = LOW;    // Increase throttle request
volatile bool currentDecreaseThrottleState = LOW;    // Increase throttle request
volatile bool previousIncreaseThrottleState = HIGH;  // Previous state of the REGEN_METHOD_TOGGLE pin
volatile bool previousDecreaseThrottleState = HIGH;  // Previous state of the REGEN_METHOD_TOGGLE pin

// Can stuff
CAN_message_t msg;      // CAN message structure
int throttle_flag = 0;  // Flag to indicate if throttle value has changed

// declaration of timer ISR
void timerISR();

void setup() {

  Serial.begin(115200);

  Serial.println("1");

  SPI.begin();
  displayInit();
  Serial.println("2");

  // Activating logging is breaking the screen SPI, commented out for now
  logging_enabled = loggingInit(LOGGING_CS_PIN);
  Serial.println(logging_enabled);
  Serial.println("3");


  // canInit(); Commented out until CAN functionality is integrated to avoid compilation errors
  pinModesInit();

  Timer1.initialize(20000);          // Initialize Timer1 to trigger ISR at 100 Hz
  Timer1.attachInterrupt(timerISR);  // Attach timerISR function to begin the timerISR loop
}

void loop() {
  // The loop function is left empty as all processing is done in the ISR
}

void timerISR() {

  // Static variables to store the last time an event was handled
  static unsigned long lastThrottleTime = 0;
  static unsigned long lastRegenTime = 0;
  unsigned long currentTime = millis();  // Get the current time in milliseconds

  // Poll THROTTLE_SPEED_INPUT pin (Analog read)
  int currentThrottleValue = analogRead(THROTTLE_SPEED_INPUT);

  // Determine throttle state based on current throttle value
  if (currentThrottleValue < 20) {
    currentIncreaseThrottleState = HIGH;  // Increase throttle request
    currentDecreaseThrottleState = LOW;
  } else if (currentThrottleValue > 52 && currentThrottleValue < 58) {
    currentIncreaseThrottleState = LOW;  // Decrease throttle request
    currentDecreaseThrottleState = HIGH;
  } else {
    currentIncreaseThrottleState = LOW;  // No throttle change
    currentDecreaseThrottleState = LOW;
    throttle_flag = 0;
  }

  // Check for throttle increase with debouncing
  if (currentIncreaseThrottleState != previousIncreaseThrottleState && currentIncreaseThrottleState == HIGH && currentTime - lastThrottleTime > 25) {  // Debounce time of 25ms
    handleThrottleInput(1, throttle, activatedRegen);                                                                                                  // Increase throttle request
    lastThrottleTime = currentTime;                                                                                                                    // Update last throttle event time
  }

  // Check for throttle decrease with debouncing
  if (currentDecreaseThrottleState != previousDecreaseThrottleState && currentDecreaseThrottleState == HIGH && currentTime - lastThrottleTime > 25) {  // Debounce time of 25ms
    handleThrottleInput(2, throttle, activatedRegen);                                                                                                  // Decrease throttle request
    lastThrottleTime = currentTime;                                                                                                                    // Update last throttle event time
  }

  // Update previous throttle state for next comparison
  previousIncreaseThrottleState = currentIncreaseThrottleState;
  previousDecreaseThrottleState = currentDecreaseThrottleState;

  // Poll REGEN_METHOD_TOGGLE pin (Digital read)
  bool currentRegenState = digitalRead(REGEN_METHOD_TOGGLE);
  if (currentRegenState == LOW && previousRegenState == HIGH) {
    // Detect falling edge and check debounce time
    if (currentTime - lastRegenTime > 25) {      // Debounce time of 25ms
      regenMethod = (regenMethod == 1) ? 2 : 1;  // Toggle between regen method 1 and 2
      lastRegenTime = currentTime;               // Update last regen event time
    }
  }
  previousRegenState = currentRegenState;  // Update previous regen state

  // Poll E-BRAKE_ACTIVATED pin (Digital read)
  bool currentBrakeState = digitalRead(E_BRAKE_ENGAGED);
  if (currentBrakeState == LOW) {
    // As long as the brake is engaged, activate regen
    handleThrottleInput(3, throttle, activatedRegen);  // Ebrake request
  } else {
    if (activatedRegen) {
      throttle = 0;            // Reset throttle to zero when eBrake is released
      activatedRegen = false;  // When the brake is released, deactivate regen
    }
  }
  log_counter++;
  if (!(log_counter % 10)) {
    LD.throttle = (int8_t)throttle;
    loggingStepWrite((log_counter % 10), LD);
  }


  // Update display with current status
  updateDisplay(throttle, speed, power, temp, batterySOC, regenMethod);

  static size_t end;
  Serial.println(millis() - end);
  end = millis();
}
