int pinState;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

pinState = digitalRead(2);

// Serial.println(pinState);
Serial.println(pinState);


if(pinState == 0){
   digitalWrite(3, HIGH);
}else {
     digitalWrite(3, LOW);

}


}
