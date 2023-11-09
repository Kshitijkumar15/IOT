int ledPins[]={8,9,10,11,12,13};
int lightModulo=0;

void setup()
{
  for(int i=0;i<6;i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  TurnOnEvenOdd();
}
void TurnOnEvenOdd()
{
  int delayTime=1000; 
  Serial.println(lightModulo);
  for(int i=0;i<6;i++)
  {
    if(i%2== lightModulo)
    {
      digitalWrite(ledPins[i],HIGH);
    }
    else
    {
      digitalWrite(ledPins[i],LOW);
    }
  }
  lightModulo--;
  lightModulo=abs(lightModulo);
 
  delay(delayTime);
}
