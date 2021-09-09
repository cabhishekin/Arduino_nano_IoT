/*
Abhishek CHowdhury @ LinxAS - STEMCELL demo code
*/

#include <Servo.h> 

Servo myservo; 

int pos = 0; 
  

void setup() { 

    myservo.attach(9); 

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
