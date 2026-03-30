void setup() {
  pinMode(7, OUTPUT);  // Red
  pinMode(8, OUTPUT);  // Yellow
  pinMode(9, OUTPUT);  // Green
}

void loop() {
  // 🔴 Red ON
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(3000);

  // 🟡 Yellow ON
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(1000);

  // 🟢 Green ON
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(3000);
}
