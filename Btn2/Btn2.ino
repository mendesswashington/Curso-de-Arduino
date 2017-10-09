/*
 * Curso de Arduino
 * Washington Santos
*/

#define LED1 13
#define LED2 12
#define LED3 11

#define BTN1 2
#define BTN2 3
#define BTN3 4

int std1 = 0;
int std2 = 0;
int std3 = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);
  pinMode(BTN3, INPUT);
}

void loop() {
  std1 = digitalRead(BTN1);
  std2 = digitalRead(BTN2);
  std3 = digitalRead(BTN3);
  
  if (std1 == HIGH) {
    digitalWrite(LED1, HIGH);
  }   else {
    digitalWrite(LED1, LOW);
  }
  if (std2 == HIGH) {
    digitalWrite(LED2, HIGH);
  }   else {
    digitalWrite(LED2, LOW);
  }
  if (std3 == HIGH) {
    digitalWrite(LED3, HIGH);
  }   else {
    digitalWrite(LED3, LOW);
  }
  delay(250);
}
