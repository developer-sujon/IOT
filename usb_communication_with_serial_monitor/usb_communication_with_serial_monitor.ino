String message = "";

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // Wait for serial port to connect (for Leonardo/Micro)
  }
  Serial.println("Serial Communication Ready!");
  Serial.println("Type a message and press Enter:");
}

void loop() {
  if (Serial.available() > 0) {
    message = Serial.readStringUntil('\n');
    message.trim(); // Remove any extra spaces/newlines
    
    if (message.length() > 0) {
      Serial.print("You sent: ");
      Serial.println(message);
      Serial.println("------------------------");
    }
  }
}
