#include <Arduino.h>

void setup()
{
  Serial.begin(9600); //Inicializo Serial 
}
 
void loop()
{
Serial.print('hola');
delay(2000);
}