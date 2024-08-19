#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT22

int LEDRED = 13;
int LEDGREEN = 12;
int pulse = 100;
int interval = 300;

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  dht.begin(); 
  Serial.println("DHT22 sensor is starting"); 
  pinMode(LEDRED, OUTPUT);
  pinMode(LEDGREEN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  if (t > 15 || t < 30) {
    digitalWrite(LEDGREEN, HIGH);
      digitalWrite(LEDRED, LOW);

  } 
  else if (t >30 || t < 35){
    digitalWrite(LEDRED, HIGH);
    digitalWrite(LEDGREEN, LOW);
  }

  else {

    for (int i = 0; i < 3; i++) {
      digitalWrite(LEDRED, HIGH);   
      delay(pulse);
      digitalWrite(LEDRED, LOW);
      delay(interval);   
  }
  }
  

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" °C");
}
