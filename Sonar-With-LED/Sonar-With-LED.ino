void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  pinMode(7,OUTPUT);
  digitalWrite(7,LOW);
  delay(10);
  digitalWrite(7,HIGH);
  delay(10);
  digitalWrite(7,LOW);
  delay(10);
  
  pinMode(7,INPUT);
  int distance = pulseIn(7,HIGH);
  distance = distance/29/2;
  Serial.println(distance);
  
  if(distance < 100){
    digitalWrite(12,1); 
  }
  else{
  	digitalWrite(12,0);
  }
}