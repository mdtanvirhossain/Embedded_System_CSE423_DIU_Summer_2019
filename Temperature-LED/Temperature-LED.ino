double tmp = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  tmp = analogRead(A0) * 0.004882814;
  tmp = (tmp - 0.5) * 100.0;
  
  //map(value, fromLow, fromHigh, toLow, toHigh)
  int bright = map(tmp,0,125,255,0);
  analogWrite(11,bright);
  
  Serial.println(tmp);
  
}