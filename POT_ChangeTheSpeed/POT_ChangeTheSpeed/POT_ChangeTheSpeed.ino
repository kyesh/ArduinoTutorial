 // Use the Potentiometer for this. See the diagram to find out how to use it.
 // The Potentiometers take in a value between 1 and 1023.
 
 int WaitTime; //A Variable that changes the time
void setup(){
  pinMode(2, OUTPUT);//Set the Pins you will be Using to Outputs
  pinMode(3, OUTPUT);//LEDs Will be dim if you do not
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT);  
  
  Serial.begin(9600);
  
   
}
//A loop routine that runs on forever and ever and ever and ever and ever ...
void loop() {
  //HIGH sends +5V into the pin, turning on the LED
  //LOW sends 0V into the pin, turning off the LED
  digitalWrite(2, HIGH);
  WaitTime = analogRead(A0); //analogRead will read the value of the sensor.
  delay(WaitTime);           //Then this value is sent to the variable WaitTime
  digitalWrite(2, LOW);      //In turn, this changes the time between light changes directly.
  digitalWrite(3, HIGH);
  WaitTime = analogRead(A0);
  delay(WaitTime);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  WaitTime = analogRead(A0);
  delay(WaitTime);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH); 
  WaitTime = analogRead(A0);
  delay(WaitTime);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH); 
  WaitTime = analogRead(A0);
  delay(WaitTime);
  digitalWrite(6, LOW); 
  WaitTime = analogRead(A0);
  delay(WaitTime);  
  Serial.println(WaitTime);
}
