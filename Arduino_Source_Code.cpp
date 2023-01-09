/*
Abhishek CHowdhury @ LinxAS - STEMCELL demo code
sept 10, change analog pin config 
*/

#include <Servo.h> 

Servo myservo; 

int pos = 0; 
  

void setup() { 

    myservo.attach(11); 

} 


void loop() { 

    myservo.write(0); 

    delay(100); 

    myservo.write(90); 

    delay(100); 

    myservo.write(180); 

//    delay(2000); 


    delay(100);  

} 
