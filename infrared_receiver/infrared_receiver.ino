#include <IRremote.h>

const int IR_RECEIVE_PIN = 11; 

void setup() {
  Serial.begin(9600);
  
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); 
  Serial.println("IR Receiver Ready. Press any remote button...");
}

void loop() {
if (IrReceiver.decode()) {
    
    Serial.print("Button Code: ");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    
    IrReceiver.resume(); 
  }
}
