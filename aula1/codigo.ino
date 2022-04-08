void setup()
{
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int var = digitalRead(3);
  digitalWrite(2, var);
  delay(10);
}
