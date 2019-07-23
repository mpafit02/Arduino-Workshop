int brightness = 0;

int ledRed=11;
int ledOrange=10;
int ledGreen=9;


int DELAY=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}


void loop()
{
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledOrange,LOW);
  digitalWrite(ledGreen,LOW);
  delay(3000);

  digitalWrite(ledRed,HIGH);
  digitalWrite(ledOrange,HIGH);
  digitalWrite(ledGreen,LOW);
  delay(1000);


  digitalWrite(ledRed,LOW);
  digitalWrite(ledOrange,LOW);
  digitalWrite(ledGreen,HIGH);
  delay(3000);


  digitalWrite(ledRed,LOW);
  digitalWrite(ledOrange,HIGH);
  digitalWrite(ledGreen,LOW);
  delay(1500);

}
