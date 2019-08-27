int interval = 1000, flag = 0, current_time = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  int a = millis();
  current_time = a;
  
  if(current_time > interval){
  	interval = interval + 1000;
    Serial.println(flag);
    
    if(flag == 0){
      flag = 1;
      digitalWrite(12,1);
    }
    else{
    	flag = 0;
      digitalWrite(12,0);
    }
  }
    
}