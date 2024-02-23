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
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
  pinMode(PIN_BUTTON_1, INPUT_PULLUP);
  pinMode(PIN_BUTTON_2, INPUT_PULLUP);

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

void buttonHandler(int BUTTON_PIN, int LED_PIN) {
  const int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH);
  }  else {
    digitalWrite(LED_PIN, LOW);
  }
}

void loop() {
  // delay(1000);
  // toggleLED(PIN_LED_YELLOW);
  // delay(1000);
  // toggleLED(PIN_LED_YELLOW);
  // delay(1000);
  // toggleLED(PIN_LED_GREEN);
  // delay(1000);
  // toggleLED(PIN_LED_GREEN);

  buttonHandler(PIN_BUTTON_1, PIN_LED_BLUE);
  buttonHandler(PIN_BUTTON_2, PIN_LED_RED);
  
}

 // Serial.print("Time: ");
  // myTime = millis();
  // Serial.println(myTime); // prints time since program started
