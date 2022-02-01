
int ledPin =3;
int wiper = A1;int readValue = 0;
int ledValue = 0;void setup() {
// put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(wiper,INPUT);}void loop() {
// put your main code here, to run repeatedly:
readValue = analogRead(wiper);
ledValue = map(readValue,0,1023,0,255);
analogWrite(ledPin,ledValue);}
