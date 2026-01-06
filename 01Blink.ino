/* Arduino Blink LED Sketch
    by Matt Ellingson, created 12/17/2025*/
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //set digital pin 13 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // turn on digital pin 13
  delay(200);  // pause for one second
  digitalWrite(13, LOW);  // turn off digital pin 13
  delay(1000); //  pause for one second
}
