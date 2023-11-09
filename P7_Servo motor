#include<Servo.h>
Servo myservo;  //servo is class, & myservo is object of class

int potpin=0;

void setup()
{
  myservo.attach(9); // you can use 3,5,6,9,10,11
}

void loop()
{
  int val=analogRead(potpin);
  int output=map(val,0,1023,0,180);
  myservo.write(output);
  delay(100);
}
