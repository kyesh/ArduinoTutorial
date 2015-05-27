void setup() {
  // put your setup code here, to run once:

  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  
  //Creates a Variable of type int named pin12Value
  int pin12Value;

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
  
  if(pin12Value == 1)
  {
    Serial.println("HIGH");
    digitalWrite(13, HIGH);
  }
  
  if(pin12Value == 0)
  {
    Serial.println("LOW");
    digitalWrite(13, LOW);
  }
  
}
