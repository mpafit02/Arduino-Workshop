
int ledPin=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(ledPin,HIGH);
  delay(60);
  digitalWrite(ledPin,LOW);
  delay(60);

}
