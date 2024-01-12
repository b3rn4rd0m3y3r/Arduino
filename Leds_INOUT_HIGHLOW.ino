void setup() {
  // put your setup code here, to run once:
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH);
    pinMode(3, OUTPUT);
    digitalWrite(3, HIGH);
    pinMode(4, OUTPUT);
    digitalWrite(4, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, LOW);
  delay(2000);
  digitalWrite(2, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  delay(2000);
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(4, LOW);
  delay(2000);
  digitalWrite(4, HIGH);
  delay(2000);
}
