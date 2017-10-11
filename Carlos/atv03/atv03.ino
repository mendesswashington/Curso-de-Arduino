//Carlos Sanches xD

const int LED[] = {4, 3, 2};
const int BTN[] = {13, 12, 11};
byte VAL[] = {0, 0, 0};
byte STD[] = {0, 0, 0};
const int buz = 9;
int i;

void setup() {
  Serial.begin(9600);
  for (i = 0; i < 3; i++) {
    pinMode(LED[i], OUTPUT);
    pinMode(BTN[i], OUTPUT);
    pinMode(buz, OUTPUT);
  }
}

void loop() {
  for (i = 0; i < 3; i++) {
    VAL[i] = digitalRead(BTN[i]);

    if(VAL[i] == HIGH){
     if(STD[i]){
      tone(buz, i*1000);
      delay(1000);
      digitalWrite(LED[i], LOW);
      Serial.println("LED[] = On"+i);
      STD[i] = 0;
      noTone(buz);
     }else{
      digitalWrite(LED[i], HIGH);
      Serial.println("LED[] = off"+i);
      STD[i] = 1;
     }
     delay(250);
    }
  }
}
