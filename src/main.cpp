#include <Arduino.h>
// DISPLAY 7 SEGMENTOS CON ARDUINO 
/*CONSTANTES PARA LOS PUERTOS*/
#define PULSASOR 10
int i;
byte numero [10][8]=
{
  { 1, 1, 1, 1, 1, 1, 0, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1, 0 }, // 2
  { 1, 1, 1, 1, 0, 0, 1, 0 }, // 3
  { 0, 1, 1, 0, 0, 1, 1, 0 }, // 4
  { 1, 0, 1, 1, 0, 1, 1, 0 }, // 5
  { 1, 0, 1, 1, 1, 1, 1, 0 }, // 6
  { 1, 1, 1, 0, 0, 0, 0, 0 }, // 7
  { 1, 1, 1, 1, 1, 1, 1, 0 }, // 8
  { 1, 1, 1, 0, 0, 1, 1, 0 }  // 9
};

void setup()
{
  // put your setup code here, to run once:
  // Iniciamos el monitor serie
  Serial.begin(9600);
  // Ponemos los pines de los segmentos en modo OUTPUT (salida)
  for ( i = 2; i < 10; i++)
  {
    /* code */
    pinMode(i,OUTPUT);
  }
  
}





void loop()
{
  // put your main code here, to run repeatedly:

}