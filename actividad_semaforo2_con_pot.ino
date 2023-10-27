
int ledRojo = 2;
int ledAmarillo = 3;
int ledVerde = 4;

int potenciometro = A0;
int pot = 0;


void setup() {
  
pinMode(ledRojo, INPUT);
pinMode(ledAmarillo, INPUT);
pinMode(ledVerde, INPUT);


pinMode(potenciometro, INPUT);

Serial.begin(4500);

Serial.print("Tiempo de Seguridad ");
delay(2000);
}

void loop() {

  
pot = analogRead(potenciometro);

Serial.print(pot);

 if(pot >= 100 && pot <=200);
 digitalWrite( ledRojo, HIGH);
 digitalWrite( ledAmarillo, HIGH);
 digitalWrite( ledVerde, HIGH);

}
