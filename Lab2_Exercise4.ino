//Assignment: expected to interface a 7 segment 
//display 


// Set up of Arduino
void setup() {
  pinMode(12, OUTPUT);  
  pinMode(13, OUTPUT); 
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT);  
  pinMode(7, OUTPUT); 
  pinMode(6, OUTPUT);  
}

void loop() {
  
  // 7-Hex eq. pins: 
  //12 = a
  //13 = b
  //11 = c
  //10 = d
  //9 = e
  //7 = f
  //6 = g

  //9
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1500);
 
  //8
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  //7
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);

  //6
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  //5
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW); 
  digitalWrite(9, HIGH); 
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  //4
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  //3
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(1500);

  //2
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(1500);
  
  //1
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);

  //0
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(1500);
}
