int rpin = 6;
int ypin = 5;
int gpin = 3;

void setup() {
  pinMode(rpin, OUTPUT);
  pinMode(ypin, OUTPUT);
  pinMode(gpin, OUTPUT);
}

void loop() {
  // RED
  digitalWrite(rpin, HIGH);
  digitalWrite(ypin, LOW);
  digitalWrite(gpin, LOW);
  delay(5000);

  // YELLOW
  digitalWrite(rpin, LOW);
  digitalWrite(ypin, HIGH);
  digitalWrite(gpin, LOW);
  delay(2000);

  // GREEN
  digitalWrite(rpin, LOW);
  digitalWrite(ypin, LOW);
  digitalWrite(gpin, HIGH);
  delay(5000);
}
