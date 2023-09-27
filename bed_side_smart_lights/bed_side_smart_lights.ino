void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int l = digitalRead(4);
  if (l == HIGH){
    for(int i = 0; i < 80; i++){
      analogWrite(5, i);
      delay(100);
      // delay(5000);
    }
    delay(5000);
    for(int i = 80; i >= 0; i--){
      analogWrite(5, i);
      delay(100);

      // delay(5000);
    }
  }

}
