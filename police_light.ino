/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led_one = 13;
int led_two = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_one, OUTPUT); 
  pinMode(led_two, OUTPUT); 
  
}

// Times: Repeat the loop x times -- for a mdelay of x milseg
void ledOneOffOn(int times, int mdelay){
  for (int i = 0; i < times; i++){
    delay(mdelay);
    digitalWrite(led_one, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(mdelay);        
    digitalWrite(led_one, LOW);    // turn the LED off by making the voltage LOW
  }
}

// Times: Repeat the loop x times -- for a mdelay of x milseg
void ledTwoOffOn(int times, int mdelay){
  for (int i = 0; i < times; i++){
    delay(mdelay);
    digitalWrite(led_two, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(mdelay);        
    digitalWrite(led_two, LOW);    // turn the LED off by making the voltage LOW
   }
}
  


// the loop routine runs over and over again forever:
void loop() {
  
  ledOneOffOn(4, 80);
  
  delay(80);
  
  ledTwoOffOn(1, 80);
   
  delay(300);

}

