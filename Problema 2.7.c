#include <stdio.h> //Libreria
/* ventas descendentes.
El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.
P, S y R: variables de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  float P, S, R; //Tipo de datos flotantes, define valores numericos con puntos decimales
  printf("\nIngrese las ventas de los tres vendedores: "); //Presenta en la pantalla algun dato
  scanf("%f %f %f", &P, &S, &R); //Lee caracteres ingresados desde el teclado
  if (P > S) //Se utiliza para establece una condicion
  if (P > R) //Si es verdadera, se cumple esta condicion
  if (S > R)
  printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R); 
  else //En caso de que sea falsa, se ejecuta esta candicion
    printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
  else
    printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
  else
  if (S > R)
  if (P > R)
    printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
  else
    printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
  else
    printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f" R, S, P);
} //Fin del programa
