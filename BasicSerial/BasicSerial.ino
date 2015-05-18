void setup() {
  // put your setup code here, to run once:

  // start serial port at 9600 bps:
  // Necessary whenever you want to use Serial communication
  Serial.begin(9600);
  Serial.println("I print once");
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("I print again and again");

}
