#include <stdio.h>
/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema se utiliza una variable
global, aunque esto, como veremos más adelante, no es muy recomendable. */
int cubo(void); /* Prototipo de función. */
int I;          /* Variable global. */
int main(void) 
{
    int CUB;
    for (I = 1; I <= 10; I++) /* Nos permite ejecutar de manera repetitiva un
        bloque de instrucciones */
    {
        CUB = cubo(); /* Llamada a la función cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}
int cubo(void) /* Declaración de la función. */
/* La función calcula el cubo de la variable global I. */
{
    return (I * I * I);
}