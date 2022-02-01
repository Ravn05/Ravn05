

void setup() {
Serial.begin(9600);

}

void loop() {
  for(int i = 10; i >= 0; i--){
    Serial.println(i);
    delay(1000);
  }

  for(int i = 1; i <= 9; i++){
    Serial.println(i);
    delay(1000);
  }
}
