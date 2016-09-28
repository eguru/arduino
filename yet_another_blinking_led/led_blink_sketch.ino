#define LED 9

void setup() {
  // the following code would run only once, before the loop() starts
  pinMode(LED, OUTPUT);

}

void loop() {
  // the following code would run repeatedly:
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
}
