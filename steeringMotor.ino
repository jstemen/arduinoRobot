
#include <Stepper.h>

const byte maxSteps = 200; //Max number of steps steering should rotate 
Stepper myStepper(200, 6,7,8,9);

void setupSteeringMotor() {

}
short turnPosition = 100;

void seekSteer() {
  short dir = turnPosition / abs(turnPosition);
  if (abs(turnPosition) >= maxSteps) {
    turnPosition = dir * -1;
    printMsg("Reached max step range, reversing.");
  } else {
    turnPosition = turnPosition + dir;
    //printMsg("Max range not hit.  Increasing to " + turnPosition);
  }
  myStepper.step(turnPosition);
}

