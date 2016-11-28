void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  // Min hertz is 40, max hertz is 10,000
  tone(13, 440);
  delay(1000);

  tone(13, 800);
  delay(1000);

  noTone(13);
  delay(500);

}
