const int led1 = 2;      
const int led2= 3;  
const int led3 = 4;     
const int botonPin = 5;    
const int botonPin2 = 6;   

void setup() {

  pinMode(led1, INPUT);
  pinMode(led2, INPUT);
  pinMode(led3, INPUT);
  pinMode(botonPin, INPUT);
   pinMode(botonPin2, INPUT);
}

void loop() {

 if (digitalRead(botonPin2) == HIGH) {

    // Si se presiona el botón, PARPADEA EL LED AMARILLO   
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);

 }
void loop(); { 
  // Verificar si se presionó el botón de parada de emergencia
  if (digitalRead(botonPin) == LOW) {
    // Si se presiona el botón, todos los LEDs se apagan
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } 
  else {
    // Si no se presiona el botón, el semáforo funciona normalmente
  digitalWrite(led1, HIGH); // led 1 se  enciende
  digitalWrite(led2, LOW); // led 2 esta apagado 
  digitalWrite(led3, LOW); // led 3 esta apagado
  delay(5000);

  digitalWrite(led1, HIGH); // led 1 se apaga
  digitalWrite(led2, HIGH); //led 2 SE encIENDE
  digitalWrite(led3, LOW); //esta apagado
  delay(1000);
   
  digitalWrite(led1, LOW); //led 1 se apaga
  digitalWrite(led2, LOW); //led 2 SE se apaga
  digitalWrite(led3, HIGH); // led 3 se enciende
  delay(3000);

  digitalWrite(led1, LOW); // led 1 se apaga
  digitalWrite(led2, HIGH); //led 2 SE encIENDE
  digitalWrite(led3, LOW); //esta apagado
  delay(1000);
  }
 }
}
