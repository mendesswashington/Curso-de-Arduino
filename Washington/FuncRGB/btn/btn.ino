#define LED 13
#define BTN 7
byte status1 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BTN,INPUT);
  digitalWrite(LED,LOW);
}

void loop() {
  status1 = digitalRead(BTN);

  if(status1){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
  delay(250);
}
