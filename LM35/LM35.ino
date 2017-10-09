/*
 *Curso de Arduino
 * Washington Santos
*/

const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;
void setup(){
 Serial.begin(9600);
 analogReference(INTERNAL); //Se estiver usando Arduino Mega, use INTERNAL1V1
}
void loop(){
 ADClido = analogRead(LM35);
 temperatura = ADClido * 0.1075268817204301;
 Serial.print("Temperatura = ");
 Serial.print(temperatura);
 Serial.println(" *C");
 delay(1000);
} 
