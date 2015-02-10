
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);//Set the Pins you will be Using to Outputs
  pinMode(3, OUTPUT);//LEDs Will be dim if you do not
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
   
}

// the loop routine runs over and over again forever:
void loop() {
  //HIGH turns a pin on or +5 Volts
  //LOW turns a pin off or 0 Volts
  //Delay Causes the program to wait for the number of miliseconds given
  digitalWrite(3, HIGH);  
  delay(500);             
  digitalWrite(3, LOW);
  digitalWrite(2 HIGH); 
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(4, HIGH); 
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  delay(1000);
  digitalWrite(6, LOW); 
  delay(1000);
}
