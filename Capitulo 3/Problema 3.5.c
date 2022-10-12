#include <stdio.h>
/*Suma pagos.
El programa obtiene la suma de los pagos realizados el ultimo mes.

PAG y SPA: variables de tipo real. */

void main(void) //Sirve como punto de entrada del programa
{
    float PAG, SPA = 0; //Se utiliza para los numeros con puntos decimales
    printf("Ingrese el primer pago:\t"); //Presenta en la pantalla algun dato
    scanf("%f", &PAG); //Lee caracteres ingresados desde el teclado
    /*Observa que al utilizar la estructura do while al menos se necesita un pago. */
    do //se utiliza para especificar un ciclo condicional que se ejecuta al menos una vez
    {
        SPA = SPA + PAG; //Operacion aritmetica
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");
        scanf("%f", &PAG);
    }
    while(PAG); /*Permite selccionar el bloque de instucciones que se va a 
    ejecutar dentro de varias opciones */
    printf("\nEl total de pagos del mes es: %.2f", SPA);
} //Fin del programa