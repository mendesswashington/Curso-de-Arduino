/*
 * Curso de Arduino
 * Washington Santos
*/

#define carroVERDE 2 //Define carroVERDE como 2
#define carroAMARELO 3 //Define carroAMARELO como 3
#define carroVERMELHO 4 //Define carroVERMELHO como 4
#define pedestreVERDE 11 //Define pedestreVERDE como 11
#define pedestreVERMELHO 12 //Define pedestreVERMELHO como 12
#define botao 8 //Define botao como 8


void setup() 
{   

//Configura os pinos como saída   
pinMode(carroVERDE, OUTPUT); //Configura pino 2 como saída   
pinMode(carroAMARELO, OUTPUT); //Configura pino 3 como saída   
pinMode(carroVERMELHO, OUTPUT); //Configura pino 4 como saída   
pinMode(pedestreVERDE, OUTPUT); //Configura pino 11 como saída   
pinMode(pedestreVERMELHO, OUTPUT); //Configura pino 12 como saída//=============================      

pinMode(botao, INPUT); //Configura o pino 8 como entrada      

//Desliga todos os LEDs do sistema  
 digitalWrite(carroVERDE, LOW); //Desliga o LED Verde dos carro   
digitalWrite(carroAMARELO, LOW); //Desliga o LED Amarelo dos carro   
digitalWrite(carroVERMELHO, LOW); //Desliga o LED Vermelho dos carro   
digitalWrite(pedestreVERDE, LOW); //Desliga o LED Verde dos pedestre   
digitalWrite(pedestreVERMELHO, LOW); //Desliga o LED Verde dos carro   //================================= 

} 

void loop()
{      

while((digitalRead(botao)) //Enquanto o botao do pedestre não for pressionado
 {     
digitalWrite(carroVERDE, HIGH); //Liga o LED Verde do carro    
digitalWrite(pedestreVERMELHO, HIGH); //Liga o LED Vermelho do pedestre   
}      

digitalWrite(carroVERDE, LOW); //Apaga o LED Verde do carro   
digitalWrite(carroAMARELO,HIGH); //Liga o LED Amarelo do carro   

delay(3000); //Aguarda 3 segundos      

digitalWrite(carroAMARELO, LOW); //Apaga o LED Amarelo do carro   
digitalWrite(carroVERMELHO,HIGH); //Liga o LED Vermelho do carro      

delay(1000); //Aguarda 1 segundo      

digitalWrite(pedestreVERMELHO, LOW); //Apaga o LED Vermelho do pedestredigitalWrite(pedestreVERDE,HIGH); //Liga o LED Verde do pedestre      

delay(5000); //Aguarda 5 segundos     

digitalWrite(pedestreVERDE,LOW); //Apaga LED Verde do pedestre      

//Pisca LED Vermelho do pedestre   
for(int i=0 ; i<5 ; i++) //Repete 5 vezes   
{   
digitalWrite(pedestreVERMELHO, !(digitalRead(pedestreVERMELHO))); //Inverte estado do LED Vermelho do pedestre   
delay(500); //Aguarda 500 milissegundos   
}  
//==============================      

delay(1000); //Aguarda 1 segundo      

digitalWrite(pedestreVERDE,LOW); //Apaga LED Verde do pedestre   
digitalWrite(carroVERMELHO,LOW); //Apaga LED Vermelho do pedestre   

}
