#include <CapacitiveSensor.h>
long sensorValue;
CapacitiveSensor capSensor = CapacitiveSensor(4,2);

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  long sensorValue = capSensor.capacitiveSensor(30);
  Serial.println(sensorValue);
  int outputValue = map(sensorValue, 60, 2200, 200, 800);
  tone(8, outputValue);
  delay(100);
}
