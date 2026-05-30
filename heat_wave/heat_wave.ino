// DHT sensor library for temperature and humidity
#include "DHT.h"

// DHT sensor configuration
#define DHTPIN 7     // Digital pin connected to DHT sensor
#define DHTTYPE DHT11 // DHT 11 sensor type

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
  Serial.println(F("DHT11 Sensor Test!"));
  
  // Start DHT sensor
  dht.begin();
}

void loop() {
  // Read humidity from DHT sensor
  float humidity = dht.readHumidity();
  
  // Read temperature as Celsius (default)
  float temperature = dht.readTemperature();

  // Check if any reads failed and exit early (to try again)
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Print humidity and temperature to serial monitor
  Serial.print(F("Humidity: "));
  Serial.print(humidity);
  Serial.print(F("%  |  Temperature: "));
  Serial.print(temperature);
  Serial.println(F("°C"));

  // Wait 2 seconds before next reading
  delay(2000);
}
