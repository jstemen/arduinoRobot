
void setupUltraSonicRangeSensor(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

int getDistance(){
  int duration, distance;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  //printMsg("Distance is: " + distance);
  return distance;
}

