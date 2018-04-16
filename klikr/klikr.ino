void setup() {
  pinMode(3, OUTPUT);
}

  byte off_time_minutes = 5;
  int intensity = 300;
  unsigned long seconds = 1000L;
  unsigned long minutes = seconds * 60;

void loop() {
  digitalWrite(3, HIGH);
  delay(intensity);
  digitalWrite(3, LOW);
  delay(minutes * off_time_minutes);
}
