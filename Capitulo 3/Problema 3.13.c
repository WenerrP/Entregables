#include <stdio.h>
/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */

void main(void) //Sirve como punto de entrada del programa
{
    int I, PRI = 0, SEG = 1, SIG; //Define variables numericas con numeros de tipo entero
    printf("\t%d \t%d", PRI, SEG); //Presenta en la pantalla algun dato
    for (I = 3; I <= 50; I++) /* Hace que las instrucciones se repitan el número de veces que 
    le decimos, normalmente le ponemos un número ( o el valor de una variable o una constante) */
    {
        SIG = PRI + SEG; //Operacion aritmetica de suma de dos variables
        PRI = SEG;
        SEG = SIG;
        printf("\t%d", SIG);
    }
}
