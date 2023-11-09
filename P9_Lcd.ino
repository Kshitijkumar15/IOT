#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Welcome to IOT lab!");
}

void loop()
{
  //Scroll 19 positions (String Length) to the left
  for(int positionCounter=0;positionCounter<19;positionCounter++)
  {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  
  //Scroll 35 positions (string length + display length(i.e. 16)) 
  //to the right
  for(int positionCounter=0;positionCounter<35;positionCounter++)
  {
    lcd.scrollDisplayRight();
    delay(150);
  }
  
  //Scroll 16 positions to move it back to center
  for(int positionCounter=0;positionCounter<16;positionCounter++)
  {
    lcd.scrollDisplayLeft();
    delay(150);
  }
}
