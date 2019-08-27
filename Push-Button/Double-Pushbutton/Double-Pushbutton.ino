void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(7,INPUT);
}

void loop()
{
  int btn1 = digitalRead(7);
  int btn2 = digitalRead(8);
  
  if(btn1 == 1){
  	digitalWrite(12, HIGH);
  }
  else if(btn2 == 1){
  	digitalWrite(12, LOW);
  }
  
  Serial.print(btn1);
  Serial.print("  <---->  ");
  Serial.println(btn2);
}