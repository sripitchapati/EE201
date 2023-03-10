void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  if (digitalRead(5) == LOW) { // GND pin
    Serial.println("It's 2023");
  }
  if (digitalRead(5) == HIGH) { // 5V pin 
    Serial.println("Hello World!");
  }
  delay(1000);
}
