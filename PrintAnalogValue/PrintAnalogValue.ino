void setup() {
  // put your setup code here, to run once:

  //Creates a Variable of type int named pin12Value
  int pin12Value;

  // start serial port at 9600 bps:
  // Necessary whenever you want to use Serial communication
  Serial.begin(9600);
  Serial.println("I print once");
}
void loop() {
  // put your main code here, to run repeatedly:
  
  //Gets that value of Analog pin 0. 
  Analog0Value = analogRead(0);
  //Value form 0 to 1023 is returned. 0 = 0 Volts, 1023 = 5 Volts
  
  //Prints the value over the Serial Monitor so you can see it.
  Serial.println(Analog0Value);
}
