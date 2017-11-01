const int LED[3] = {13, 12, 11}; //Array para as potas dos leds
const int BTN[3] = {4, 3, 2}; // Array para os butões
      int vet[3] = {0, 0 , 0}; //Array para armazenar status dos butões

void setup() {
  /*
     Inicia o programa e declara os pinos dos leds como saida
    e o dos butões como entrada
  */
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(LED[i], OUTPUT);
    pinMode(BTN[i], INPUT);
    digitalWrite(LED[i], LOW);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    std[i] = digitalRead(BTN[i]);
  }
  for (int i = 0; i < 3; i++) {
    if (std[i] == LED[i]) {
      digitalWrite(LED[i], HIGH);
      //Serial.println("LED["+i +"] = HIGH");
    } else {
      digitalWrite(LED[i], LOW);
      //Serial.println("LED["+i+"] = LOW");
    }
    delay(250);
  }
}
