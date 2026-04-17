String message = "";

void setup() {
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("Running...");
  delay(1000);

 if(Serial.available()){
  message = Serial.readStringUntil("\n");
 }

 Serial.println(message);
}
