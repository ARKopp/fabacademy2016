

void setup() {
  
  pinMode(0,OUTPUT); // mosi, LED right
  pinMode(1,OUTPUT); // miso, LED left

 
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(100);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(100);       
}
