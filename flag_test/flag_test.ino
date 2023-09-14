int flag = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(D6, INPUT);
  digitalWrite(D6, HIGH);  // input PULL-UP
  pinMode(D7, OUTPUT);
  digitalWrite(D7, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  flag = digitalRead(D6);
  if (flag == 0) {
    digitalWrite(D7, HIGH);
    delay(1000);
    // flag = 1;
    digitalWrite(D7, LOW)
  }
}
