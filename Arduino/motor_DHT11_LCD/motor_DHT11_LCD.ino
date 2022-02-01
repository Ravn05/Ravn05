
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

#define DHTPIN 6
#define DHTTYPE DHT11
DHT dht (DHTPIN, DHTTYPE);

int motor = 3;
void setup() {
  
Serial.begin(9600);
Serial.println(F("DHTxx test!"));

dht.begin();

lcd.init();
lcd.backlight();
}
void loop() {
delay(2000);

float humi = dht.readHumidity();
float temp = dht.readTemperature();

if (isnan(temp) || isnan(humi)){
Serial.println(F("Failed to read from DHT sensor!"));
return;
}
lcd.setCursor(0,0);
lcd.print(F("Humidity: "));
lcd.print(humi);
lcd.print(F("% "));
lcd.setCursor(0,1);
lcd.print(F("Temp: "));
lcd.print(temp);
lcd.print(F("C"));
lcd.print(char(223));
if(temp >= 25){
analogWrite(motor, 255);
} else if(temp < 25){
digitalWrite(motor, LOW);
}
}
