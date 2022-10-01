#include <stdio.h> //Libreria
#include <math.h> //Libreria
/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresión determinada.
T, P y N: variables de tipo entero. */
void main(void) //Es el punto de entrada al programa
{
  int T, P, N; //Define variables numericas con numeros de tipo entero
  printf("Ingrese los valores de T, P y N: ");
  //Presenta en la pantalla algun dato
  scanf("%d %d %d", &T, &P, &N);
  //Lee caracteres ingresados desde el teclado
  if (P != 0) //Si la condicion es verdadero el programa termina. Si es falso, pasa a la siguiente condicion
  {
    if (pow(T / P, N) == (pow(T, N) / pow(P, N)) /*Si la condicion es verdadera el programa termina,
    si el programa es falso, pasa al else que le sucede */ 
    printf("\nSe comprueba la igualdad");
    else
    printf("\nNo se comprueba la igualdad");
  }
  else
    printf("\nP tiene que ser diferente de cero");
} //Fin del programa