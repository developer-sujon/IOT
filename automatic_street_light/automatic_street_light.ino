void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  int ldrInputValue = analogRead(A0);

  Serial.println("ldrInputValue");
  Serial.println(ldrInputValue);


  if(ldrInputValue < 10){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }


}
