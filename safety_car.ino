


int o = 3;
int oo = 4;
int b = 6;
int bb = 7;


void setup() {                
  pinMode(o, OUTPUT); 
 pinMode(oo, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(bb, OUTPUT);
}

void loop() {
 
    digitalWrite(o, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(b, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(80); 

    digitalWrite(o, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(b, LOW);   // turn the LED on (HIGH is the voltage level)
    
 delay(80); 
    
        digitalWrite(o, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(b, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(80); 

    digitalWrite(o, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(b, LOW);   // turn the LED on (HIGH is the voltage level)
    
 delay(80); 
    
   
   
       
      digitalWrite(oo, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(bb, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(80); 

    digitalWrite(oo, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(bb, LOW);   // turn the LED on (HIGH is the voltage level)
    
 delay(80);   
    
      digitalWrite(oo, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(bb, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(80); 

    digitalWrite(oo, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(bb, LOW);   // turn the LED on (HIGH is the voltage level)
    
 delay(200);  
  
}

  
