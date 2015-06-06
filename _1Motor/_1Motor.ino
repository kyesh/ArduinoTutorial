void setup() {
  // put your setup code here, to run once:

  // initialize digital pin as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  // start serial port at 9600 bps:
  // Necessary whenever you want to use Serial communication
  Serial.begin(9600);
  Serial.println("I print once");
}
void loop() {
  // put your main code here, to run repeatedly:
  
//Spin Motor One Direction
digitalWrite(3, HIGH);
digitalWrite(4, LOW);

delay(1000);

//Spin Motor Other Direction
digitalWrite(3, LOW);
digitalWrite(4, HIGH);

delay(1000);
  
}
