int In1 = 5;
int In2 = 6;
void setup()
{
  Serial.begin(9600);
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
}
void loop()
{
// MEMENDEK
  Serial.println("MEMENDEK");
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  delay(7000);

//  DIAM
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW); 
  delay(10000);
  
//  MEMANJANG
  Serial.println("MEMANJANG");
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH); 
  delay(7000);

  //  DIAM
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW); 
  delay(10000);
}
