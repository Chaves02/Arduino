int photoPin = A0;
int ledPin1 = 12;
int ledPin2 = 13;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  int lightRaw = analogRead(photoPin);
  int light = map(lightRaw, 1023, 0, 10, 0);

  if (light < 7) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

  else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
}