// Pin assignment
const int mq6AnalogPin = A0;   // Connect MQ-6 AO (Analog Output) pin to Arduino A0
const int mq6DigitalPin = 7;   // Connect MQ-6 DO (Digital Output) pin to Arduino D7
const int threshold = 350;      // Set threshold level for gas leak detection

int gasLevel = 0;               // Variable to store MQ-6 sensor readings

const int redLedPin = 6;
const int yellowLedPin = 5;
const int greenLedPin = 4;
const int whiteLedPin = 3;

const int piezoBuzzerPin = 8;   // Connect piezo buzzer to Arduino D8

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600); 
  
  Serial.println("Sensor warming up...");

  // Set LED and buzzer pins as outputs
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(whiteLedPin, OUTPUT);
  pinMode(piezoBuzzerPin, OUTPUT);

  // Set MQ-6 digital pin as input
  pinMode(mq6DigitalPin, INPUT);

  // delay(20000); // Sensor warm-up time (uncomment if needed)
}

void loop() {
  // Read analog value from MQ-6 sensor
  gasLevel = analogRead(mq6AnalogPin);

  // Read digital value from MQ-6 sensor
  int gasDetectedDigital = digitalRead(mq6DigitalPin);

  // Print sensor readings to Serial Monitor
  Serial.print("Current Gas Level: ");
  Serial.print(gasLevel);
  Serial.print(" | Gas Detected (Digital): ");
  Serial.println(gasDetectedDigital == LOW ? "YES" : "NO");

  // Check if gas level exceeds safe threshold
  if (gasLevel > threshold) {
    Serial.println("⚠️ ALERT: LPG / Gas Leak Detected!");

    // Turn on all LEDs
    digitalWrite(redLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(whiteLedPin, HIGH);

    // Activate buzzer
    digitalWrite(piezoBuzzerPin, HIGH);
  } else {
    // Turn off all LEDs and buzzer
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(whiteLedPin, LOW);
    digitalWrite(piezoBuzzerPin, LOW);
  }
  
  delay(500); // Wait 500ms before next reading
}