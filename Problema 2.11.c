#include <stdio.h> //Libreria
/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
cuenta la distancia entre las dos ciudades y el tiempo de permanencia
del pasajero.
DIS y TIE: variables de tipo entero.
BIL: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  int DIS, TIE; //Define variables numericas con numeros de tipo entero
  float BIL; //Se utiliza para los numeros con puntos decimales
  printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); 
  //Presenta en la pantalla algun dato
  scanf("%d %d", &DIS, &TIE); //Lee caracteres ingresados desde el teclado
  if ((DIS*2 > 500) && (TIE > 10)) //Se utiliza para establece una condicion
    BIL = DIS * 2 * 0.19 * 0.8; //Operaciones aritmeticas
  else
    BIL = DIS * 2 * 0.19;
  printf("\n\nCosto del billete: %7.2f", BIL); /* Se imprime por pantalla el 
  resultado de la condicion */
} //Final del programa