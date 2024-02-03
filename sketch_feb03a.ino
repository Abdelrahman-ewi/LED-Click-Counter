 int button = 2;  
 int red = 13;
 int blue = 12;
 int green = 11;
 int counter = 0;  

void setup() {
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  
}

void loop() {
 
 if (digitalRead(button)==HIGH)
 {
   counter++;
   if(counter==1)
   {
     digitalWrite(red,HIGH);
   }
   else if(counter==2)
   {
     digitalWrite(blue,HIGH);
   }
   else if(counter==3)
   {
     digitalWrite(green,HIGH);
   }
   else if(counter==4)
   {
     digitalWrite(red,LOW);
     digitalWrite(blue,LOW);
     digitalWrite(green,LOW); counter=0;
   }
   delay(250);
 }
  
  
}
      
      
      

      
     
     
     
        
     

      
      
    
  
