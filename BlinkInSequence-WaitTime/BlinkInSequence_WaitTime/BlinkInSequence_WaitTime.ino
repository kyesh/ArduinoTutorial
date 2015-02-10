/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

  // int is the variable type. ints are positive or negative whole numbers
  // WaitTime is the variable
 int pin, sensorValue;//WaitTime;//This line makes a variable called WaitTime that can store positive and negative whole numbers
 
// the setup routine runs once when you press reset:
void setup() {  
  //This line stores the value 1000 into the variable WaitTime. Now wherever you use WaitTime the program will see 1000
  
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);//Set the Pins you will be Using to Outputs
  pinMode(3, OUTPUT);//LEDs Will be dim if you do not
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pin = 2;
}

// the loop routine runs over and over again forever:
/* void loop() {
  //HIGH turns a pin on or +5 Volts
  //LOW turns a pin off or 0 Volts
  //Delay Causes the program to wait for the number of miliseconds given
  digitalWrite(2, HIGH);  
  delay(analogRead(A0));             
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH); 
  delay(analogRead(A0));
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH); 
  delay(analogRead(A0));
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  delay(analogRead(A0));
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  delay(analogRead(A0));
  digitalWrite(6, LOW); 
  delay(analogRead(A0));
} */

void loop() {
  /*digitalWrite(pin,LOW);
  pin = map(analogRead(A0),0,1023,2,6);
  digitalWrite(pin, HIGH);*/
  
  
  if (analogRead(A0) < 205) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  } 
  else if (analogRead(A0) < 410) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  else if (analogRead(A0) < 615) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
  else if (analogRead(A0) < 820) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }
  else {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
}
