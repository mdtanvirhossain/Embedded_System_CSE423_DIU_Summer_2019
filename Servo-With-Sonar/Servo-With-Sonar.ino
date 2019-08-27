#include<Servo.h>
Servo serv;
void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  serv.attach(4);
}

void loop()
{
  digitalWrite(8,0);
  delay(10);
  digitalWrite(8,1);
  delay(10);
  digitalWrite(8,0);
  delay(10);
  
  int distance = pulseIn(7,HIGH);
  distance = distance/29/2;
  Serial.println(distance);
  
  if(distance < 200){
  	serv.write(90);delay(1000);
  }
  else{
    delay(1000);serv.write(0);
  }
}