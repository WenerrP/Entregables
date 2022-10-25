#include <stdio.h>

/*Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

int main(void) // Sirve como punto de entrada del programa
{
  int I, NUM; // Define variables numericas con numeros de tipo entero
  long FAC;   /* Es el tipo de dato de 80 bits de precisión extendida
    soportado por el hardware x86 */
  printf("\nIngrese el numero: "); // Presenta en la pantalla algun dato
  scanf("%d", NUM);                // Lee caracteres ingresados desde el teclado

  if (NUM >= 0)
    ; // Se utiliza para establece una condicion
  {
    FAC = 1;                   // Inicializacion de la variable en 1
    for (I = 1; I <= NUM; I++) // Lee caracteres ingresados desde el teclado
      FAC += 1;
    printf("\nEl factorial de %d es: %ld", NUM, FAC);
  }
  printf("\nError en dato ingresado");
} // Fin del programa