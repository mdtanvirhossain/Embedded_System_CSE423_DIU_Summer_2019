void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  int ptn = analogRead(A0);
  
  int bright = map(ptn,0,1023,0,255);
  analogWrite(3,bright);
  
  Serial.println(bright);
  
}