

const int led =  4; 

const int button = 2;

const int led2 = 8;

const int button2 = 6;

const int led3 = 12;

const int button3 = 10;


int buttonState = 0;

int buttonState2 = 0;

int buttonState3 = 0;

 

void setup(){  

  pinMode(led, OUTPUT);

  pinMode(led2, OUTPUT);

  pinMode(led3, OUTPUT);

  pinMode(button, INPUT); 

  pinMode (button2, INPUT);

  pinMode (button3, INPUT);

} 

 

void loop(){ 

  buttonState = digitalRead(button);

  buttonState2 = digitalRead(button2);

  buttonState3 = digitalRead(button3);
  
 

  if (buttonState == HIGH){ 

    digitalWrite(led, HIGH);

  }
    
  else{
    digitalWrite(led, LOW);
  }  
 
 if (buttonState2 == HIGH){

   digitalWrite(led2, HIGH);
 {

 else {  
    digitalWrite(led2, LOW);
  }
 
  if(buttonState3 == HIGH){

     digitalWrite(led3, HIGH);
  {

 else {
  digitalWrite(led3, LOW);
  }

   
 
