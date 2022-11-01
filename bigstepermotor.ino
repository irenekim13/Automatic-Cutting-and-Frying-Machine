void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(8, LOW);
  delayMicroseconds(10);

  for (int j=0; j<5000; j++)
  {
    digitalWrite(9, HIGH);
    delayMicroseconds(150);
    digitalWrite(9, LOW);
  }

  delay(1000);
    
  digitalWrite(8, HIGH);
  delayMicroseconds(10);

  for(int i=0; i<5000; i++)
  {
    digitalWrite(9, HIGH);
    delayMicroseconds(150);
    digitalWrite(9,LOW);
  }

  delay(3000);

}
