
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 13110;  // change this to fit the number of steps per revolution
// for your motor
int relay=2;
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int i;
void setup() {
  // set the speed at 20 rpm:
  myStepper.setSpeed(20);
  pinMode(relay, OUTPUT);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  
  while(i>=0)
  {
    if(i%2==0)
  {  digitalWrite(relay,HIGH);
  Serial.println("Motor1");
  myStepper.step(stepsPerRevolution);
  i++;
  }
  else
  {  digitalWrite(2,LOW);
  Serial.println("Motor2");
  myStepper.step(stepsPerRevolution);
  i++;
  }
  }
}

