void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {

  digitalWrite(7, HIGH);
  delay(150);
  digitalWrite(7, LOW);

  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);
  delay(150);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(150);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(150);
  digitalWrite(9, LOW);

  digitalWrite(8, HIGH);
  delay(150);
  digitalWrite(8, LOW);
}