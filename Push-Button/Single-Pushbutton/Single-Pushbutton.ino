void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(7,INPUT);
}

void loop()
{
  int btn = digitalRead(7);
  
  if(btn == 1){
  	digitalWrite(12, HIGH);
  }
  else{
  	digitalWrite(12, LOW);
  }
  
  Serial.println(btn);
}