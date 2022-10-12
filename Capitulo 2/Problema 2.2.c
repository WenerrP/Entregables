#include <stdio.h>
/*Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si este  es inferior a $1,500.
PRE y NPR> variable de tipo real. */

void main (void) //Es el punto de entrada al programa
{
    float PRE, NPR; //Tipo de datos flotantes, define valores numericos con puntos decimales
    printf("Ingrese el precio del producto: "); //Presenta en la pantalla algun dato
    scanf("%f", &PRE); //Lee caracteres ingresados desde el teclado
    if (PRE > 1500) //Se utiliza para establece una condicion
    {
        NPR = PRE + 1.11; //Operacion aritmetica
        printf("\nNuevo precio: %7.2f", NPR);
    }
} //Fin del codigo