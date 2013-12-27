void setupDriveMotor(){
pinMode(goPin, OUTPUT);
}

void idle(){
  Serial.println("Proximity Alert!  In idle mode.");
  goForward();
  goBackward();
}

void goForward(){
  Serial.println("Going forward...");
  digitalWrite(goPin, HIGH);
  delay(500);
}

void goBackward(){
  Serial.println("Going backward...");
  digitalWrite(goPin, LOW);
  delay(700);
}

