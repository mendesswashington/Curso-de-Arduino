/*
 * Curso de Arduino
 * Washington Santos
*/
const int LED[] = {13, 12, 11};
const int BTN[] = {2, 3, 4};
byte VAL[] = {0, 0, 0};
byte STD[] = {0, 0, 0};
int i;

void setup() {
  Serial.begin(9600);
  for (i = 0; i < 3; i++) {
    pinMode(LED[i], OUTPUT);
    pinMode(BTN[i], OUTPUT);
  }
}

void loop() {
  for (i = 0; i < 3; i++) {
    VAL[i] = digitalRead(BTN[i]);

    if(VAL[i] == 1){
     if(STD[i]){
      digitalWrite(LED[i], 0);
      Serial.println("LED[%d] = off"+i);
      STD[i] = 0;
     }else{
      digitalWrite(LED[i], 1);
      Serial.println("LED[%d] = On"+i);
      STD[i] = 1;
     }
     delay(250);
    }
  }
}
