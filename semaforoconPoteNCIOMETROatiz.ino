//Asignacion de Variables 
int led_1 = 3;
int led_2 = 4;
int led_3 = 5;

int potenciometro = A0;
int pot = 0;



void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, INPUT);
  pinMode(led_3, OUTPUT);
 

  pinMode(potenciometro, INPUT);
  Serial.begin(9600);

  Serial.print("Tiempo de Seguridad ");
  delay(1000);
  
}

void loop() {
//digitalWrite(led_1, HIGH);//LED encendido
//digitalWrite(led_1, LOW);//LED apagado
 
 pot = analogRead(potenciometro); 
 Serial.println( pot);
 



 if (pot >= 500 && pot <= 600){
   
   digitalWrite(led_1, HIGH);//LED encendido
   digitalWrite(led_2, LOW);//LED encendido
   digitalWrite(led_3, LOW);//LED encendido
 }
  
   if (pot >= 650 && pot <= 900){
   
   digitalWrite(led_1, LOW);//LED encendido
   digitalWrite(led_2, HIGH);//LED encendido
   digitalWrite(led_3, LOW);//LED encendido
   }
   
  if (pot >= 1000 && pot <= 1400){
  
   digitalWrite(led_1, LOW);//LED encendido
   digitalWrite(led_2, LOW);//LED encendido
   digitalWrite(led_3, HIGH);//LED encendido
  }
  
  if (pot >= 2000 && pot <= 3000){
    
   digitalWrite(led_1, LOW);//LED encendido
   digitalWrite(led_2, HIGH);//LED encendido
   digitalWrite(led_3, HIGH);//LED encendido
   
 }
}