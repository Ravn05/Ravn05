void setup() {
  // put your setup code here, to run once:
 //declare inputs/outputs
 pinmode(led, OUTPUT) ; //declares led(pin 13) as a output signal
}

void loop() {
  // put your main code here, to run repeatedly:
/*
 * read input
 * manipulate data
 * output
 */
 digitalWrite(led, HIGH);  //turn on led (HIGH = 3,3V - 5Voutput
 delay(1000);  //wait for 1 second (1s =1000ms)
 digitalWrite(led, LOW); //turn of led (LOW = 0V output through pin
 delay(1000);  //wait 1 second
}
