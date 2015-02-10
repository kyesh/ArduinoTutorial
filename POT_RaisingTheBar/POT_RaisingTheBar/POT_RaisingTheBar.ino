  // int is the variable type. ints are positive or negative whole numbers
 int Sensor;//This line makes a variable called sensor that can read the value of the sensor
// the setup routine runs once when you press reset:
void setup() {
  
 Sensor = 1000;//This line assigns the value of 1000 to the variable WaitTime. Now wherever you use WaitTime the program will see 1000
  
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
 
 Sensor = analogRead(A0);
  if(Sensor >=823){
  digitalWrite(2, HIGH);       
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  } else if (Sensor >= 623 && Sensor < 823){
  digitalWrite(2, HIGH);       
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH); 
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  } else if (Sensor >= 423 && Sensor < 623){
  digitalWrite(2, HIGH);       
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  } else if (Sensor >= 223 && Sensor < 423){
  digitalWrite(2, HIGH);       
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  } else if (Sensor >= 23 && Sensor <223){
  digitalWrite(2, HIGH);       
  digitalWrite(3, LOW);
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  } else {
  digitalWrite(2, LOW);       
  digitalWrite(3, LOW);
  digitalWrite(4, LOW); 
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  }
}
