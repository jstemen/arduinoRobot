/*
 HC-SR04 Ping distance sensor]
 VCC to arduino 5v GND to arduino GND
 Echo to Arduino pin 13 Trig to Arduino pin 12
 More info at: http://goo.gl/kJ8Gl
 */

#define trigPin 12
#define echoPin 13
#define alertDistance 30

#define goPin 11

static int angle = 2000;

void setup() {
  Serial.begin (9600);
  setupUltraSonicRangeSensor();
  setupDriveMotor(); 
  setupSteeringMotor();
  setupLcd();
  setupServo();
}


void loop() {
  int distance = getDistance();
  if (distance >= alertDistance || distance <= 0){
    goForward();
  }
  else {
    seekSteer();
    idle();
  }
  angle = -1 * angle;
  turnServo(angle);
  delay(4000);
}
