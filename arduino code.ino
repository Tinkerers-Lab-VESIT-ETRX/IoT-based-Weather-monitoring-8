#include "DHT.h"
#define dht_1 2
#define DHTTYPE DHT11
DHT dht(dht_1, DHTTYPE);

void setup(){
Serial.begin(9600);
  dht.begin();
 }
void loop(){
 float h= dht.readHumidity();
 float t= dht.readTemperature();
 Serial.print("Humidity = ");
    Serial.print(h);
    Serial.print("%  ");
    Serial.print('\n');
    Serial.print("Temperature in C= ");
    Serial.print(t);
     Serial.print('\n');
    delay(2000);
   
 }
