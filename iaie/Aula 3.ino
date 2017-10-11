const int buzzer = 9;
const int ledg = 2;
const int ledy = 4;
const int ledr = 6;
const int pushg = 3;
const int pushy = 5;
const int pushr = 7;
int tesg = 0;
int tesy = 0;
int tesr = 0;
void setup() {
  pinMode(ledg, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(pushg, INPUT);
  pinMode(pushy, INPUT);
  pinMode(pushr, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tesg=digitalRead(pushg);
  tesy=digitalRead(pushy);
  tesr=digitalRead(pushr);
  if( tesg == HIGH ){
      digitalWrite(ledg, HIGH);
      tone(buzzer, 1000);
      delay(1000);
      noTone(buzzer);
      delay(1000);
  }else{
      digitalWrite(ledg, LOW);
  }
    if( tesy == HIGH ){
      digitalWrite(ledy, HIGH);
      tone(buzzer, 2000);
      delay(1000);
      noTone(buzzer);
      delay(1000);
  }else{
      digitalWrite(ledy, LOW);
  }
    if( tesr == HIGH ){
      digitalWrite(ledr, HIGH);
      tone(buzzer, 3000);
      delay(1000);
      noTone(buzzer);
      delay(1000);
  }else{
      digitalWrite(ledr, LOW);
  }
  
}
