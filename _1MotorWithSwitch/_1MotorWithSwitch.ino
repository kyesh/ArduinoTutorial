//Creates a Variable of type int named pin12Value and pin11Value
int pin12Value;
  
void setup() {
  // put your setup code here, to run once:

  // initialize digital pin as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
    // initialize digital pin as an output.
  pinMode(12, INPUT);
  
  // start serial port at 9600 bps:
  // Necessary whenever you want to use Serial communication
  Serial.begin(9600);
  Serial.println("I print once");
}
void loop() {
  // put your main code here, to run repeatedly:
  
  //Gets that value of pin 12. 
  pin12Value = digitalRead(12);
  //1 = HIGH
  //0 = LOW
  
  //Spins Motor One Way When Button Pressed
  if(pin12Value == 1)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  //Spins Motor opposite Way When Button released
  if(pin12Value == 0)
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }  
  
}
