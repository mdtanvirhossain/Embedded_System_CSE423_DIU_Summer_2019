void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  //tone(pin, frequency)
  //tone(pin, frequency, duration)
  tone(3,255,500);
  tone(3,505,50);
  tone(3,400,1000);
  tone(3,100,500);
  tone(3,200,500);

}