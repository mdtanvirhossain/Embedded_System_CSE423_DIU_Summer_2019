double tmp = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  tmp = analogRead(A0) * 0.004882814;
  tmp = (tmp - 0.5) * 100.0;
  
  //map(value, fromLow, fromHigh, toLow, toHigh)
  if(tmp > 30){
  	digitalWrite(8,1);
    digitalWrite(11,1);
  }
  else{
  	digitalWrite(8,0);
    digitalWrite(11,0);
  }
  
  Serial.println(tmp);
  
}