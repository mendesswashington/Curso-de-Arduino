#define LED 13
#define LED2 12
#define LED3 11



void setup() {
//
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED,LOW);
  delay(2000); 
  digitalWrite(LED2, HIGH);
  delay(1500);
  digitalWrite(LED2,LOW);
  delay(1500); 
  digitalWrite(LED3, HIGH);
  delay(500);
  digitalWrite(LED3,LOW);
  delay(500); 
}
