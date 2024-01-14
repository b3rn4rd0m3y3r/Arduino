void setup() {
  // put your setup code here, to run once:
    pinMode(2, OUTPUT);
    digitalWrite(2, HIGH);
    pinMode(3, OUTPUT);
    digitalWrite(3, HIGH);
    pinMode(4, OUTPUT);
    digitalWrite(4, HIGH);
}
void pisca(int pino, int t){
  digitalWrite(pino, LOW);
  delay(t);
  digitalWrite(pino, HIGH);
  delay(t);
}
void loop() {
  // put your main code here, to run repeatedly:
  pisca(2,1000);
  pisca(3,1000);
  pisca(4,1000);
}
