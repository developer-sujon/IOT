int onLed = 2;
int goingUp = 1;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(onLed, HIGH);
  delay(300);
  digitalWrite(onLed, LOW);

  Serial.println(onLed);

  if (goingUp) {
    onLed++;
    if (onLed > 5) {
      onLed = 4;
      goingUp = 0;
    }
  } else {
    onLed--;
    if (onLed < 2) {
      onLed = 3;
      goingUp = 1;
    }
  }
}