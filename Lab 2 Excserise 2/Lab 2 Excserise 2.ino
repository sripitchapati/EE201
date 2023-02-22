void setup() {
  pinMode(12, OUTPUT);  
  pinMode(10, OUTPUT);  
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(250);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  delay(250); 
}
