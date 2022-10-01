#include <stdio.h>
#include <math.h>
/* Par, impar o nulo.
NUM: variable de tipo entero. */
void main(void) //Es el punto de entrada al programa
{
  int NUM; //Define variables numericas con numeros de tipo entero
  printf("Ingrese el número: "); //Presenta en la pantalla algun dato
  scanf("%d", &NUM); //Lee caracteres ingresados desde el teclado
  if (NUM == 0) //Se utiliza para establece una condicion
    printf("\nNulo"); /* En caso de que la condicion sea verdadera, 
    se va a presentar esto por pantalla */
  else //En caso de que sea falso, se ejecutaran los algoritmos que lo sucedan
    if (pow (-1, NUM) > 0)
      printf("\nPar");
    else
      printf("\nImpar");
} //Fin de programa
