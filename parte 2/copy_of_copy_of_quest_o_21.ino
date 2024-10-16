int ledverde =4;
int ledamarelo =3;

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW); 
  delay(500);
}
  
  
  