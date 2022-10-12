#include <stdio.h>

/*Incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al 
mismo 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual).

PRE y NPR: variables de tipo real. */

void main (void) //Es el punto de entrada al programa
{
    float PRE, NPR; //Tipo de datos flotantes, define valores numericos con puntos decimales
    printf("Ingrese el precio del producto: "); //Presenta en la pantalla algun dato
    scanf("%f", &PRE); //Lee caracteres ingresados desde el teclado
    if (PRE < 1500) //Se utiliza para establece una condicion
        NPR = PRE * 1.11; /* Si la codicion es verdadera se ejecutara esta
        operacion aritmetica */
    else //Si la condicion es falsa pasa a esta linea de codigo
        NPR = PRE * 1.08; // Operacion aritmetica
    printf("\nNuevo precio del producto: %8.2f", NPR);
}