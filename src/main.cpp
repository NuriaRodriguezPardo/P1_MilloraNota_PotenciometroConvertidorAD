#include <Arduino.h>

const int pwmOutputPin = 35; 
const int portPin = 4; 

int portValue = 0; 

void setup ()
{
  Serial.begin(115200); 
  pinMode(pwmOutputPin, OUTPUT);
  delay(1000);
}

void loop ()
{
  portValue = analogRead(portPin);
  Serial.println(portValue);
  analogWrite(pwmOutputPin, portValue);

  delay(500);
}