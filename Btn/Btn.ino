/*
 * Curso de Arduino
 * Washington Santos
*/
#define LED 13
#define BTN 7

void setup() {
 pinMode(LED, OUTPUT);
 pinMode(BTN, INPUT);
}

void loop() {
 byte status1 = digitalRead(BTN);
  if(status1){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  delay(250);
}
