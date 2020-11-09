const int LedPin1=13;
const int LedPin2=12;

void setup()
{
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  
}

void loop()
{

  digitalWrite(LedPin13, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(LedPin13, LOW);
  delay(350); // Wait for 350 millisecond(s)
  
  digitalWrite(LedPin12, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(LedPin12, LOW);
  delay(600); // Wait for 600 millisecons(s)
}
