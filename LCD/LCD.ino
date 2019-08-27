#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  //LiquidCrystal(rs, enable, d4, d5, d6, d7)
  //LiquidCrystal(rs, rw, enable, d4, d5, d6, d7)
  //LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7)
  //LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
  delay(1000);
  lcd.clear();
  lcd.print("Md. Tanvir");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Hossain");
  delay(1000);
  lcd.clear();
}