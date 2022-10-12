#include <stdio.h>

/*Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrdo de los mismos y la suma correspondiente a dichos cuadros. */

void main (void) //Sirve como punto de entrada del programa
{
    int NUM; //Define variables numericas con numeros de tipo entero
    long CUA, SUC = 0; /* Es el tipo de dato de 80 bits de precisión extendida 
    soportado por el hardware x86 */
    printf("\nIngrese un numero entero -0 para terminar -:\t"); //Presenta en la pantalla algun dato
    scanf("%d", &NUM); //Lee caracteres ingresados desde el teclado
    while (NUM)
    /*Observa que la condicion es verdadera mientras el entero es diferente de cero. */
    /* Ejecuta un bloque de instrucciones en un bucle siempre que esta condición sea verdadera */
    {
        CUA = pow (NUM, 2);
        printf ("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA; //Operacion aritmetica de suma de dos variables
        printf ("\nIngrese un numero entero -0 para terminar -:\t");
        scanf("%d", NUM);
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);
} //Fin del programa