/*
L293d_MotorControl

Components:

Circuit:

*/

const int enable12 = 3; //PWM to enable 1&2 on the L293d
const int input1 = 4;   //digital pin to input 1A on the L293d
const int input2 = 5;   //digital pin to input 2A on the L293d
 

void setup(){
  pinMode(enable12, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
 
}

void loop(){
  analogWrite(enable12, 153); //PWM 0 - 255 for motor speed control
  
  //motor direction (reverse)
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
 
  
}
