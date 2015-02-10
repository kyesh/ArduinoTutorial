
  // int is the variable type. ints are positive or negative whole numbers
  // WaitTime is the variable
 int WaitTime;//This line makes a variable called WaitTime that can store positive and negative whole numbers
 
 int sensorValue = 0;
 int outputPin = 2;
// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600); 
  WaitTime = 10;//This line assigns the value of 1000 to the variable WaitTime. Now wherever you use WaitTime the program will see 1000
  
  // initialize the digital pin as an output.
  pinMode(2, OUTPUT);//Set the Pins you will be Using to Outputs
  pinMode(3, OUTPUT);//LEDs Will be dim if you do not
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
   
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(outputPin, LOW);
  sensorValue = analogRead(A0);
  outputPin = map(sensorValue, 0, 1023, 2, 6); //The first two numbers in this code ivolve a boundary of numbers, these numbers are seperated into 5 even number sections for example:
  //0-200,200-400,400-600,800-1000.
  digitalWrite(outputPin, HIGH);
  Serial.print("SensorValue: ");
  Serial.println(sensorValue);
  Serial.print("outputPin: ");
  Serial.println(outputPin);
  delay(WaitTime);             
}
