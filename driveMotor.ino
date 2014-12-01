void setupDriveMotor(){
pinMode(goPin, OUTPUT);
}

void idle(){
  printMsg("Proximity Alert!  In idle mode.");
  goForward();
  goBackward();
}

void goForward(){
  printMsg("Going forward...");
  digitalWrite(goPin, HIGH);
  delay(500);
}

void goBackward(){
  printMsg("Going backward...");
  digitalWrite(goPin, LOW);
  delay(700);
}
