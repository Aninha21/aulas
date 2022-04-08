void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
 
}

int var;
void loop()
{
  var = digitalRead(12);
  if (var){
   digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  delay(10);  
}
