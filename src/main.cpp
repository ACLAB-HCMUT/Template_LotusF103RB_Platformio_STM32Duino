#include <Arduino.h>

// Define the LED pins
const int ledPinPC9 = PC9;
const int ledPinPA5 = PA5;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(ledPinPC9, OUTPUT);
  pinMode(ledPinPA5, OUTPUT);
}

void loop() {
  // Turn the LEDs on
  digitalWrite(ledPinPC9, HIGH);
  digitalWrite(ledPinPA5, HIGH);
  delay(100); // Wait for 1 second

  // Turn the LEDs off
  digitalWrite(ledPinPC9, LOW);
  digitalWrite(ledPinPA5, LOW);
  delay(100); // Wait for 1 second
}
