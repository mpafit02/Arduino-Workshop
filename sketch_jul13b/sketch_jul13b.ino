int ledPin = 10;
int brightness = 0;
int factor=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}
int del=100;
void loop() {

  if(brightness == 255)
  {
    factor=-1;

    digitalWrite(ledPin,HIGH);
    delay(del);

    digitalWrite(ledPin,LOW);
    delay(del);

    digitalWrite(ledPin,HIGH);
    delay(del);

    digitalWrite(ledPin,LOW);
    delay(del);

     digitalWrite(ledPin,HIGH);
    delay(del);

    digitalWrite(ledPin,LOW);
    delay(del);
    
  }
  
  analogWrite(ledPin, brightness);
  brightness += factor;
  delay(5);


  // put your main code here, to run repeatedly:
  if (brightness==0) {
    factor=1;
  }
}
