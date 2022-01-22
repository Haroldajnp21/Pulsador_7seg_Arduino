#include <Arduino.h>
// DISPLAY 7 SEGMENTOS CON ARDUINO 
/*CONSTANTES PARA LOS PUERTOS*/
#define PULSASOR 10
int i;
int e;
#define TIEMPO 500
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
  // Ponemos el pin del pulsador en modo INPUT (entradda)
    pinMode(PULSASOR, INPUT);
 
  //Establecemos la semilla fija
  randomSeed(analogRead(A0));
}

void loop()
{
  // put your main code here, to run repeatedly:
  // Leemos el valor del pulsador
  int valor =digitalRead(PULSASOR);

  if (valor== HIGH)
  {
    /* code */
    int ramdomNumber = random(1,7);

    for ( e = 0; e <8; e++)
    {
      /* code */
      digitalWrite(e+3,numero[ramdomNumber][e]);
    }
    _delay_ms(TIEMPO);
  }
  


}