#include "DHT.h"

#define DHTPIN 2       // DHT11 data pin connected to digital pin 2
#define DHTTYPE DHT11  // DHT 11 Sensor
DHT dht(DHTPIN, DHTTYPE);

int ledPin = 13;       // LED connected to pin 13

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(ledPin, OUTPUT);
}

void loop() {
  float tempC = dht.readTemperature();  // Read temperature in Celsius

  if (isnan(tempC)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC > 30.0) {
    digitalWrite(ledPin, HIGH);  // Turn on LED if temp > 30°C
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED
  }

  delay(2000); // Wait 2 seconds before next reading
}
