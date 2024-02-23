#include <Arduino.h>


const int PIN_LED_RED = 4;    // The Number of the red LED pin.
const int PIN_LED_GREEN = 5;  // The Number of the green LED pin.
const int PIN_LED_BLUE = 6;   // The Number of the blue LED pin.
const int PIN_LED_YELLOW = 7; // The Number of the yellow LED pin.
const int PIN_BUTTON_1 = 8;   // The number of the button 1 (KEY1) pin.
const int PIN_BUTTON_2 = 9;   // The number of the button 2 (KEY2) pin.

int buttonState_1 = 0; // Keep track of the button 1 state.
int buttonState_2 = 0; // Keep track of the button 2 state.

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);


  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);


}
unsigned long myTime;

void toggleLED(int LED) {
  const int state = digitalRead(LED);

  if (state == HIGH) {
    digitalWrite(LED, LOW);
    return;
  }

  digitalWrite(LED, HIGH);
}

void loop() {
  delay(1000);
  toggleLED(PIN_LED_YELLOW);
  delay(1000);
  toggleLED(PIN_LED_YELLOW);
  delay(1000);
  toggleLED(PIN_LED_GREEN);
  delay(1000);
  toggleLED(PIN_LED_GREEN);
  // Serial.print("Time: ");
  // myTime = millis();
  // Serial.println(myTime); // prints time since program started
}
