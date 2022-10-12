#include <stdio.h>

/*Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el ultimo
mes, obtiene la suma de los mismos.

PAG y SPA: variables de tipo real. */

void main(void) //Sirve como punto de entrada del programa
{
    float PAG, SPA; //Tipo de datos flotantes, define valores numericos con puntos decimales
    SPA = 0; //Inicionalizacion de la variable
    printf("Ingrese el primer pago:\t"); //Presenta en la pantalla algun dato
    scanf("%f", &PAG); //Lee caracteres ingresados desde el teclado
    while (PAG)
    /*Observa que la condicion es verdadera mientras el pago es diferente de cero. */
    /*Permite selccionar el bloque de instucciones que se va a ejecutar dentro de 
    varias opciones */
    {
        SPA = SPA + PAG; //Operacion aritmetica de suma
        printf("Ingrese el siguiente pago:\t"); //Presenta en la pantalla algun dato
        scanf("%f", &PAG); //Lee caracteres ingresados desde el teclado
        /*Observa que la proposicion que modifica la conidicion es una lectura. */
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}