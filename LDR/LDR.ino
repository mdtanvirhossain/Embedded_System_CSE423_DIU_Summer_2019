void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int ldr = analogRead(A0);
  //map(value, fromLow, fromHigh, toLow, toHigh)
  int bright = map(ldr,6,679,255,0);
  
  analogWrite(11,bright);
  
  Serial.println(bright);
}