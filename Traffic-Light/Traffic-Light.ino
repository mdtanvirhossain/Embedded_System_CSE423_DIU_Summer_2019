void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(12,1);
  delay(1000);
  digitalWrite(12,0);
  digitalWrite(10,1);
  delay(1000);
  digitalWrite(10,0);
  digitalWrite(8,1);
  delay(1000);
  digitalWrite(8,0);
  delay(1000);
}