const int irSensorPin = 2;
const int ledPin = 13;

bool ledState = LOW;
bool lastIrState = HIGH;

void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);
}

void loop() {
  bool currentIrState = digitalRead(irSensorPin);

  if (lastIrState == HIGH && currentIrState == LOW) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }

  lastIrState = currentIrState;

  delay(50);
}