/*
 * Curso de arduino 2017
 * Washington Santos
*/

const int LED[] = {9, 10, 11};
int i, w[3] = {255,255,255};
void RGB(int COR[]);
void setup() {
  // put your const setup code here, to run once:
  Serial.begin(9600);
  for(i = 0; i < 3; i++){
    pinMode(LED[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  RGB(w);
}

void RGB(int COR[]){
  for(i = 0; i < 3; i++){
    analogWrite(LED[i],COR[i]);
  }
}
