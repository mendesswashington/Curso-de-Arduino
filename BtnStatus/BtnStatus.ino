#define led 13
#define button 7
byte val = 0;
boolean status1 = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  val = digitalRead(button);

  if (val == HIGH) {
    if (status1) {
      digitalWrite(led, LOW);
      Serial.println("off");
      status1 = false;
    } else {
      digitalWrite(led, HIGH);
      Serial.println("on");
      status1 = true;
    }
    delay(250);
  }
}
