void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  // LED 1
  analogWrite(9, 50);  delay(200);
  analogWrite(9, 150); delay(200);
  analogWrite(9, 255); delay(300);
  analogWrite(9, 0);   delay(300);

  // LED 2
  analogWrite(10, 50);  delay(200);
  analogWrite(10, 150); delay(200);
  analogWrite(10, 255); delay(300);
  analogWrite(10, 0);   delay(300);

  // LED 3
  analogWrite(11, 50);  delay(200);
  analogWrite(11, 150); delay(200);
  analogWrite(11, 255); delay(300);
  analogWrite(11, 0);   delay(500);
}