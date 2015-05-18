
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);//Set the Pins you will be Using to Outputs
  //LEDs Will be dim if you do not
   
}

// the loop routine runs over and over again forever:
void loop() {
  //HIGH turns a pin on or +5 Volts
  //LOW turns a pin off or 0 Volts
  //Delay Causes the program to wait for the number of miliseconds given

  digitalWrite(2 HIGH); 
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
}

