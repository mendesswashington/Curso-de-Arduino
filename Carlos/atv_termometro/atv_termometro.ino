const int LM35 = 0;
float temperatura = 0;
const int LED[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
int ADClido = 0;
const int buz = 13;
void setup(){
 Serial.begin(9600);
 for (int i = 0; i < 10; i++) {
    pinMode(LED[i], OUTPUT);
 } 
 pinMode(buz, OUTPUT);
 analogReference(INTERNAL); //Se estiver usando Arduino Mega, use INTERNAL1V1
}
void loop(){
 ADClido = analogRead(LM35);
 temperatura = ADClido * 0.1075268817204301;
 tone(buz, temperatura * 75);
 Serial.print("Temperatura = ");
 Serial.print(temperatura);
 Serial.println(" *C");
 if(temperatura < 21.30){
  for(int i = 0; i < 3; i++){
    digitalWrite(LED[i], HIGH);
    delay(250);
  }
 }
 if(temperatura > 21.30){
  for(int i = 0; i < 7; i++){
    digitalWrite(LED[i], HIGH);
    delay(250);
  }
 } 
 delay(1000);
 noTone(buz);
 for(int i = 0; i < 10; i++){
   digitalWrite(LED[i], LOW); 
 }
 delay(1000);
} 
