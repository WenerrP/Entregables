#include <stdio.h>
/* Números perfectos.
El programa, al recibir como dato un número entero positivo como límite, obtiene
los números perfectos que hay entre 1 y ese número, y además imprime cuántos numeros perfectos hay en el intervalo. 
I, J, NUM, SUM, C: variables de tipo entero. */

void main(void) //Sirve como punto de entrada del programa
{
    int I, J, NUM, SUM, C = 0;
    printf("\nIngrese el numero limite: ");
    scanf("%d", &NUM);
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0;
        for (J = 1; J <= (I / 2); J++)
            if ((I % J) == 0)
                SUM += J;
        if (SUM == I)
        {
            printf("\n%d es un numero perfecto", I);
            C++;
        }
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}