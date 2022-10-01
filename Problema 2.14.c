#include <stdio.h> //Libreria
/* Teléfono.
El programa, al recibir como datos la clave de la zona geográfica y el
número de segundos de una llamada telefónica, calcula el costo de la misma.
CLA y TIE: variables de tipo entero.
COS: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  int CLA, TIE; //Define variables numericas con numeros de tipo entero
  float COS; //Se utiliza para los numeros con puntos decimales
  printf("Ingresa la clave y el tiempo: "); //Presenta en la pantalla algun dato 
  scanf("%d %d", &CLA, &TIE); //Lee caracteres ingresados desde el teclado
  switch(CLA) /*Permite selccionar el bloque de instucciones que se va a 
  ejecutar dentro de varias opciones */
  {
    case 1: COS = TIE * 0.13 / 60; /* Dependiendo del valor de la variable, 
    ejecuta un bloque de instrucciones */
      break; //Finaliza la ejecucion del bucle
    case 2: COS = TIE * 0.11 / 60; 
      break;
    case 5: COS = TIE * 0.22 / 60; 
      break;
    case 6: COS = TIE * 0.19 / 60; 
      break;
    case 7:
    case 9: COS = TIE * 0.17 / 60; 
      break;
    case 10: COS = TIE * 0.20 / 60; 
      break;
    case 15: COS = TIE * 0.39 / 60; 
      break;
    case 20: COS = TIE * 0.28 / 60; 
      break;
    default : COS = -1; 
      break; 
  }
  if (COS != -1)
    printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS); 
    //Se imprime por pantalla el resultado de las operaciones
  else
    printf("\nError en la clave");
} //Final del programa