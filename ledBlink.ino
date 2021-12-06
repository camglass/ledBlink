int ledPins[] = {13, 14, 15};

void setup() {
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
}

void loop() {
  int randomI = random(3);
  digitalWrite(ledPins[randomI], HIGH);
  delay(500);
  digitalWrite(ledPins[randomI], LOW);
  delay(500);
}
