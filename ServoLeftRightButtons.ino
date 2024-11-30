// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
 Servo myservo;  // create servo object to control a servo 


const int left  = 7;
int leftState = 0;

const int right = 6;
int rightState = 0;

const int serpin = 9;
int pos = 0;
 
void setup() 
{ 
  
  Serial.begin(9600);
  
  pinMode(left, INPUT);   
  pinMode(right, INPUT);   
  
  myservo.attach(serpin); 
  
    myservo.write(pos);
  
} 
 
void loop() { 
    
   leftState  = digitalRead(left);
   rightState = digitalRead(right);
   
   
   if ( leftState == HIGH && ( pos >= 0 && pos <= 180 ) ){
     
     Serial.print( "POS: " ); Serial.println(pos);
     
    if (pos != 0 ){ 
      
      myservo.write(pos);
      pos = pos-2;
    }
 
  delay(10);
 
   }
   
   
   else if ( rightState == HIGH && ( pos >= 0 && pos <= 180 ) ){
      
     Serial.print( "POS: " ); Serial.println(pos);
      
    
     if (pos != 178 ){
       
       myservo.write(pos);
       pos = pos+2;
       
     }
 
  delay(10);
 
   }

  
} 
