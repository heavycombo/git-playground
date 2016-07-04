/*
  THe Fameous Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  Just a board and Atom config test
 */

#define ONBOARD_LED_PIN 2

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(ONBOARD_LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ONBOARD_LED_PIN, HIGH);
  delay(1000);              // wait for a second
  digitalWrite(ONBOARD_LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
