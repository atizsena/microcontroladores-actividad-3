int analogPin = A0;
int V1;

void setup(){
  pinMode(analogPin, INPUT);
  Serial.begin(9600);  
}

void loop()
{
 V1 = analogRead(analogPin); 
  Serial.println(V1);  
}
