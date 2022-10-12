#include <stdio.h>
#include <math.h>
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de 
una función.
Y: variable de tipo entero.
X: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
    float X; //Tipo de datos flotantes, define valores numericos con puntos decimales
    int Y; //Define variables numericas con numeros de tipo entero
    printf("Ingrese el valor de Y: "); //Presenta en la pantalla algun dato
    scanf("%d", &Y); //Lee caracteres ingresados desde el teclado
    if (Y < 0 || Y > 50) //Lee caracteres ingresados desde el teclado
        X = 0;
    else //Si la condicion es falsa pasa a esta linea de codigo
        if (Y <= 10)
        X = 4 / Y - Y; /* Si la codicion es verdadera se ejecutara esta
            operacion aritmetica */
    else
        if (Y <= 25)
        X = pow(Y, 3) - 12;
    else
        X = pow(Y, 2) + pow(Y, 3) - 18;
        printf("\n\nY = %d\tX = %8.2f", Y, X);
} //Fin del programa