
void setup()
{
  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int pir = digitalRead(4);
  Serial.println(pir);
  
  if(pir == 1){
  	digitalWrite(2,1);
    delay(500);
    digitalWrite(2,0);
    delay(500);
  }
  else{
  	digitalWrite(2,0);
  }
}