const int sensorPin = A0;   
int sensorValue;     
float value;        

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  sensorValue = analogRead(sensorPin);        
  value = fmap(sensorValue, 0, 1023, 0.0, 5.0);   

  Serial.println(value);              
  delay(100);
}


float fmap(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}na