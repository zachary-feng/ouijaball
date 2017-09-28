#include <Servo.h>

Servo firstServo;
Servo secondServo;

// Servo pins
const int firstServoPin = 5;
const int secondServoPin = 6;

// Pin constants
const int ledPinOn = 12;
const int ledPinOff = 11;
const int buttonPin = 1;
int buttonState = 0;

// Positioning moves
int moveOne = 0;
int moveTwo = 180;

// Need to have an exact measurement of where the wheels are set!

// Position array
int pos[7][2] = {
  {60, 120}, // pos 1 low
  {42, 135}, // pos 2 med
  {30, 152}, // pos 3 high
  {33, 98}, // pos 4 low-right
  {12, 120}, // pos 5 high-right
  {75, 146}, // pos 6 low-left
  {60, 165}, // pos 7 high-right
};

// Position input
int ans = 5;

void setup() {

    firstServo.attach(firstServoPin);
    secondServo.attach(secondServoPin);

    firstServo.write(0);
    secondServo.write(180);
    
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(ledPinOn, OUTPUT);
    pinMode(ledPinOff, OUTPUT);
    pinMode(buttonPin, INPUT); //initialize button as input

    // LED on and off
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(ledPinOn, HIGH);
    digitalWrite(ledPinOff, HIGH);
}

void loop() {

  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    switch(ans) {
      case 1:
        for (moveOne = firstServo.read(); moveOne < pos[0][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[0][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
        break;
      case 2:
        for (moveOne = firstServo.read(); moveOne < pos[1][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[1][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
         break;
      case 3:
        for (moveOne = firstServo.read(); moveOne < pos[2][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[2][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
         break;
      case 4:
        for (moveOne = firstServo.read(); moveOne < pos[3][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[3][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
         break;
      case 5:
        for (moveOne = firstServo.read(); moveOne < pos[4][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[4][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
         break;
      case 6:
        for (moveOne = firstServo.read(); moveOne < pos[5][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[5][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
         break;
      case 7:
        for (moveOne = firstServo.read(); moveOne < pos[6][0]; moveOne++) {
            firstServo.write(moveOne);
            delay(50);
        }
        for (moveTwo = secondServo.read(); moveTwo > pos[6][1]; moveTwo--) {
            secondServo.write(moveTwo);
            delay(50);
        }
         break;
    }
    
    digitalWrite(ledPinOn, LOW);
    digitalWrite(ledPinOff, LOW);
    
  }
}
