// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if ((-40 + 0.488155 * (analogRead(A0) - 20)) < 40) {
    digitalWrite(11, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(12, LOW);
  } else {
    digitalWrite(13, HIGH);
    delay(6000); // Wait for 6000 millisecond(s)
    digitalWrite(13, LOW);
    tone(7, 523, 1000); // play tone 60 (C5 = 523 Hz)
    Serial.println("we have a problem");
  }
}
