void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("In Main Loop");
  delay(100);
  int val = digitalRead(12);
  Serial.println(val);
  delay(100);
  int i = 10;
  while (i) {
    Serial.println("While Block");
    val = digitalRead(12);
    Serial.println(val);
    delay(1000);
    i--;
  }
  Serial.println("EOL");
  delay(100);
}
