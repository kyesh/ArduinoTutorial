//Creates a Variable of type int named pin12Value and pin11Value
int pin12Value;
int pin11Value;
  
void setup() {
  // put your setup code here, to run once:

  // initialize digital pin as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  // initialize digital pin as an output.
  pinMode(11, INPUT);
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
  
  //Goes one way if one button is pressed
  if(pin12Value == 1)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  
  //Gets that value of pin 11. 
  pin11Value = digitalRead(11);
  //1 = HIGH
  //0 = LOW
  
  //Goes oposite direction if other button is pressed
  if(pin11Value == 1)
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  
  //If both buttons are not pressed then motor stops
  // && is called the and operator
  if((pin11Value == 0)&&(pin11Value == 0))
  {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  
  
  
}
