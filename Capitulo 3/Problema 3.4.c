#include <stdio.h>

/*Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrdo de los mismos y la suma correspondiente a dichos cuadros. */

void main (void) //Sirve como punto de entrada del programa
{
    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un numero entero -0 para terminar -:\t");
    scanf("%d", &NUM);
    while (NUM)
    /*Observa que la condicion es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow (NUM, 2);
        printf ("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf ("\nIngrese un numero entero -0 para terminar -:\t");
        scanf("%d", NUM);
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);
}