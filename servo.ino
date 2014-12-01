 
#include <Servo.h>

Servo servo1;

void setupServo() {

  pinMode(1,OUTPUT);
  servo1.attach(14); //analog pin 0
  Serial.println("Ready");

}

void turnServo(int angle) {

  servo1.write(angle);

} 

