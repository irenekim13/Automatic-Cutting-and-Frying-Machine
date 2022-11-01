
//Sensor Cahaya
const int RelayPin = 3;
const int LightPin = 2;
int Light = LOW;

void setup() 
{
  pinMode(RelayPin, OUTPUT);

  pinMode(LightPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  Light = digitalRead(LightPin);
  Serial.println(Light);
  if (Light == LOW)
  {
    digitalWrite(RelayPin, LOW);
    
  }
  else
  {
    digitalWrite(RelayPin, HIGH);
 
  }
}
