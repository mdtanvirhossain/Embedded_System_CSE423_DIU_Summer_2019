void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, 1);
  delay(500);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  delay(500);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  delay(500);
  digitalWrite(7,0);
  delay(500);
}