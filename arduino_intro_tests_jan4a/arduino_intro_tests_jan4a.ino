void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 13;
  digitalWrite(x, HIGH);
  delay(1000);
  digitalWrite(x, LOW);
  delay(1000);
}
