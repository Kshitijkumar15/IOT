int brt = 0;
int Led = 9;

void setup() 
{
  pinMode(Led, OUTPUT);
  Serial.begin(9600);  // 9600 is Baud rate
}

void loop() 
{
  for (brt = 0; brt <= 255; brt += 5) 
  {  
    analogWrite(Led, brt);
    Serial.println(brt);
  }
  delay(1000);  

  for (brt = 255; brt >= 0; brt -= 5) 
  {  
    analogWrite(Led, brt);
    Serial.println(brt);
  }
  delay(1000);  
}
