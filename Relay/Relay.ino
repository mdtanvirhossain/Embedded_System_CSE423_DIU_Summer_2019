void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7,1);
  Serial.println("Light ON");
  delay(1000);
  digitalWrite(7,0);
  Serial.println("Light OFF");
  delay(1000);
  
}