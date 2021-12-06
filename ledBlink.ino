int ledPins[] = {13, 14, 15};

void setup() {
  for (int i=0; i<3; i++) pinMode(ledPins[i], OUTPUT);
}

void loop() {
  int randomI = random(3);
  digitalWrite(ledPins[randomI], HIGH);
  delay(500);
  digitalWrite(ledPins[randomI], LOW);
  delay(500);
}
