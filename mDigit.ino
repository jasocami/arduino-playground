

const int a =  13;      
const int b =  12;  
const int c =  11;      
const int d =  10;    
const int e =  9;     
const int f =  8;      
const int g =  7;     

const int dot =  6;     



int pines[7] = {a, b, c, d, e, f, g};


const int mdelay = 1000;

byte seven_seg_digits[10][7] = {
                     //          A B C D E F G
                               { 1,1,1,1,1,1,0 },  // = 0
                               { 0,1,1,0,0,0,0 },  // = 1
                               { 1,1,0,1,1,0,1 },  // = 2
                               { 1,1,1,1,0,0,1 },  // = 3
                               { 0,1,1,0,0,1,1 },  // = 4
                               { 1,0,1,1,0,1,1 },  // = 5
                               { 1,0,1,1,1,1,1 },  // = 6
                               { 1,1,1,0,0,0,0 },  // = 7
                               { 1,1,1,1,1,1,1 },  // = 8
                               { 1,1,1,0,0,1,1 }   // = 9
                     };


void sevenSegWrite(int pos) {
   
  for (byte segCount = 0; segCount < 8; ++segCount) {
    
    digitalWrite(pines[segCount], seven_seg_digits[pos][segCount]);
    
  }
}


void setup() {
   pinMode(a, OUTPUT);  
   pinMode(b, OUTPUT);     
   pinMode(c, OUTPUT);  
   pinMode(d, OUTPUT);     
   pinMode(e, OUTPUT);  
   pinMode(f, OUTPUT);     
   pinMode(g, OUTPUT);  
   pinMode(dot, OUTPUT);
   
   digitalWrite(dot, 0);
   
}

void loop(){

 
  
  
  for (int count = 0; count < 10; ++count) {
   delay(1000);
   sevenSegWrite(count); 
  }
  delay(4000);  
   
   
}
