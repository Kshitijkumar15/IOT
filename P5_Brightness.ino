const int analogInput1 = A0;
const int analogInput2 = A1;
const int analogOutput1 = 10;
const int analogOutput2 = 9;
const int analogOutput3 = 6;
const int analogOutput4 = 5;

int sensorValue1 = 0;
int outputValue1 = 0;

int sensorValue2 = 0;
int outputValue2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorValue1 = analogRead(analogInput1);
  outputValue1 = map(sensorValue1,0,1023,0,255);
  analogWrite(analogOutput1,outputValue1);
  analogWrite(analogOutput2,outputValue1);
  Serial.print("\n\n\nSensor 1=");
  Serial.print(sensorValue1);
  Serial.print("\tOutput 1=");
  Serial.print(outputValue1);
  
  sensorValue2 = analogRead(analogInput2);
  outputValue2 = map(sensorValue2,0,1023,0,255);
  analogWrite(analogOutput3,outputValue2);
  analogWrite(analogOutput4,outputValue2);
  Serial.print("\nSensor 2=");
  Serial.print(sensorValue2);
  Serial.print("\tOutput 2=");
  Serial.print(outputValue2);
}
