#include<Servo.h>
Servo myservo;  //servo is class, & myservo is object of class

int potpin=0;

void setup()
{
  myservo.attach(9); // you can use 3,5,6,9,10,11
}

void loop()
{
  for(int pos=0;pos<180;pos++)
  {
    myservo.write(pos);
    delay(5);
  }
  
  for(int pos=180;pos>0;pos--)
  {
    myservo.write(pos);
    delay(5);
  }
}
