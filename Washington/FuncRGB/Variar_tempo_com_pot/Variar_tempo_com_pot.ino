const int led = 9;
int pot = A0;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  val = analogRead(pot);
  digitalWrite(led,HIGH);
  delay(val);
  digitalWrite(led,LOW);
  delay(val);
}
