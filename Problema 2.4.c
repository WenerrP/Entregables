#include <stdio.h>
/* incremento de precio. 
El programa, al recibir como dato el precio de un producto, incrementa al
➥mismo 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual). 
PRE y NPR: variables de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  float PRE, NPR; //Tipo de datos flotantes, define valores numericos con puntos decimales
  printf("Ingrese el precio del producto: "); //Presenta en la pantalla algun dato
  scanf("%f", &PRE); //Lee caracteres ingresados desde el teclado
  if (PRE < 1500) //Se utiliza para establece una condicion
    NPR = PRE * 1.11; //En caso de ser verdadera, se resuelve esta operacion aritmetica
  else //En caso de ser falsa, el programa pasa a un else
    NPR = PRE * 1.08; //Como la condicion es falsa, se resuleve esta operacion aritmetica
  printf("\nNuevo precio del producto: %8.2f", NPR); //Dependiendo del resultado de las operaciones, se presentan por pantalla
}