/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = A1;  // analog pin used to connect the potentiometer
int potVal;    // variable to read the value from the analog pin

int button = 7;
int buttonState = 0;

void setup() {
  pinMode(button, INPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);
  
}

void loop() {
  buttonState = digitalRead(button);
  potVal = analogRead(potpin);  // reads the value of the potentiometer (value between 0 and 1023)

  potpin = map(potVal, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  
  if (buttonState == LOW){
    myservo.write(30);
    delay(50);
  }
  else{
    myservo.write(potpin);                  // sets the servo position according to the scaled value
    delay(50);                           // waits for the servo to get there
  }

  Serial.print(potVal);
  Serial.print("  ");
  Serial.println(potpin);
}
