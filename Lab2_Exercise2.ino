//Interface Two LED's to any GPIO pin of the Arduino 
//through a current limiting resistor. 
void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); //
  pinMode(10, OUTPUT);  
}

//Blink LED's alr=ternatively, Vary the delay timings 
// to change and observe the blinking speed of the LED's
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(250);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  delay(250); 
}
