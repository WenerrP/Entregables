#include <stdio.h>
#include <math.h>
/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  float RES; //Se utiliza para los numeros con puntos decimales
  int R, T, Q; //Define variables numericas con numeros de tipo entero
  printf("Ingrese los valores de R, T y Q: "); //Presenta en la pantalla algun dato
  scanf("%d %d %d", &R, &T, &Q); //Lee caracteres ingresados desde el teclado
  RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2); //Operaciones arimeticas
  if (RES < 820) //Se utiliza para establece una condicion
    printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
}