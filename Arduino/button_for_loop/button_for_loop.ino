const int motor = 3;
const int start_button = 8;

int buttonState;
void setup() {
Serial.begin(9600);

pinMode(start_button
}
void loop(){
buttonState = digitalRead(start_button);

if(buttonState == HIGH);
int end_val = 10;
int start_val = 0;

  for(int i = start_val; i <= end_val; i++){
    Serial.println(i);
    analogWrite(motor, 255);
    delay(1000);
  }
  else{
  //analogWrite(motor, 0);
  digitalWrite(motor, LOW);
}
}
