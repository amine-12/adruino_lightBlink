const int LED = D1;

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);

}

void loop() {
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
  delay(1000);
}
