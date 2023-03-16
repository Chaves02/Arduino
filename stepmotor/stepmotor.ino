#include <Stepper.h>
const int stepsPerRevolution = 200;  
Stepper stepper1(stepsPerRevolution, 8, 10, 9, 11);

void setup() {}

void loop() {
  int potReading = analogRead(A0);
  int motorSpeed = map(potReading, 0, 1023, 0, 100);
  if (motorSpeed > 0) {
    stepper1.setSpeed(motorSpeed);
    stepper1.step(stepsPerRevolution / 100);
  }
}