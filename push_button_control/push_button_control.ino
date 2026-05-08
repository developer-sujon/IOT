int pinState;
int lastPinState = 1;
int countState = 0;
bool ledOn = false;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(6, OUTPUT);
}

void fadeLedOn() {
  int levels[] = {0, 64, 128, 191, 255}; // 0%, 25%, 50%, 75%, 100%
  
  for (int i = 0; i < 5; i++) {
    analogWrite(6, levels[i]);
    Serial.print("Brightness: ");
    Serial.print((levels[i] * 100) / 255);
    Serial.println("%");
    delay(400);
  }
}

void loop() {
  pinState = digitalRead(2);

  if (pinState == 0 && lastPinState == 1) {
    delay(50);

    if (!ledOn) {
      countState++;
      Serial.print("Count: ");
      Serial.println(countState);

      if (countState == 3) {
        ledOn = true;
        countState = 0;
        fadeLedOn(); 
        Serial.println("LED ON!");
      }

    } else {
      ledOn = false;
      analogWrite(6, 0);
      countState = 0;
      Serial.println("LED OFF!");
    }
  }

  lastPinState = pinState;
}