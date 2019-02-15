int led = 7;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on
  delay(300);               // wait
  digitalWrite(led, LOW);    // turn the LED off
  delay(300);               // wait
  
  digitalWrite(led, HIGH);  //repeat
  delay(300);               
  digitalWrite(led, LOW);    
  delay(300);            
  
  digitalWrite(led, HIGH);  
  delay(300);               
  digitalWrite(led, LOW);    
  delay(900);  

  digitalWrite(led, HIGH);  //longer delay for dashes
  delay(900);               
  digitalWrite(led, LOW);    
  delay(300);

  digitalWrite(led, HIGH);  
  delay(900);               
  digitalWrite(led, LOW);    
  delay(300);

  digitalWrite(led, HIGH);  
  delay(900);               
  digitalWrite(led, LOW);    
  delay(900);

  digitalWrite(led, HIGH);  
  delay(300);               
  digitalWrite(led, LOW);    
  delay(300);  

  digitalWrite(led, HIGH);  
  delay(300);               
  digitalWrite(led, LOW);    
  delay(300);  

  digitalWrite(led, HIGH);  
  delay(300);               
  digitalWrite(led, LOW);    
  delay(2100);            //extra delay after SOS
}
