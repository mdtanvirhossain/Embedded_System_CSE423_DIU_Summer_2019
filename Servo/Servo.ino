#include<Servo.h>
Servo serv;
void setup()
{
  Serial.begin(9600);
  serv.attach(7);
}

void loop()
{
  serv.write(100);
  delay(1000);
  serv.write(50);
  delay(1000);
  serv.write(90);
  delay(1000);
  serv.write(0);
  delay(1000);
}