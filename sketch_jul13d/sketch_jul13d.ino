


void setup() {
  // put your setup code here, to run once:

  for(int i=5;i<=12;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(5,HIGH);
  delay(200);
  for(int i=5;i<=12;i++)
  {
    digitalWrite(i,LOW);
    digitalWrite(i,HIGH);
    delay(200);
  }

  digitalWrite(5,LOW);

}
