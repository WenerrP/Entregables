#include <stdio.h> //Libreria
#include <math.h> //Libreria
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de 
una función.
Y: variable de tipo entero.
X: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  float X; //Tipo de datos flotantes, define valores numericos con puntos decimales
  int Y; //Se utiliza para los numeros con puntos decimales
  printf("Ingrese el valor de Y: "); //Presenta en la pantalla algun dato
  scanf("%d", &Y); //Lee caracteres ingresados desde el teclado
  if (Y < 0 | | Y > 50) //Se utiliza para establece una condicion
    X = 0;
  else
    if (Y <= 10)
    X = 4 / Y - Y;
  else
    if (Y <= 25)
    X = pow(Y, 3) - 12;
  else
    X = pow(Y, 2) + pow(Y, 3) - 18;
    printf("\n\nY = %d\tX = %8.2f", Y, X);
} //Fin del programa