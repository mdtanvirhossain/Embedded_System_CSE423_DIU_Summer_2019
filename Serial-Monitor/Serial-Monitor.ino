void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
  	char input = Serial.read();
    
    if(input == '2'){
    	Serial.println("LIGHT ON");
    }
  }
}