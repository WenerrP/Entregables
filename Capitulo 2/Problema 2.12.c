#include <math.h>  //Libreria
#include <stdio.h> //Libreria

/* Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresión determinada.
T, P y N: variables de tipo entero. */
int main(void) // Es el punto de entrada al programa
{
    int P, N; // Define variables numericas con numeros de tipo entero
    float T;
    printf("Ingrese los valores de T, P y N: "); // Presenta en la pantalla algun
                                                // dato
    scanf("%d %d %d", &T, &P, &N); // Lee caracteres ingresados desde el teclado
    if (P != 0) /* Se utiliza para establece una condicion, si es verdadera
    se ejecutaran las siguientes instrucciones */
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
        printf("\nSe comprueba la igualdad");
        else
        printf("\nNo se comprueba la igualdad");
    } else // Si la condicion es falsa pasa a esta linea de codigo
        printf("\nP tiene que ser diferente de cero"); /* Luego presentando este
        mensaje por pantalla */
}