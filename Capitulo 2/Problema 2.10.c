#include <stdio.h>
#include <math.h>
/* Par, impar o nulo.
NUM: variable de tipo entero. */
void main(void) //Es el punto de entrada al programa
{
    int NUM; //Define variables numericas con numeros de tipo entero
    printf("Ingrese el número: "); //Presenta en la pantalla algun dato
    scanf("%d", &NUM); //Lee caracteres ingresados desde el teclado
    if (NUM == 0) //Se utiliza para establece una condicion
        printf("\nNulo");
    else //Si la condicion es falsa pasa a esta linea de codigo
        if (pow (-1, NUM) > 0) //Se ejecuta una nueva condicion
            printf("\nPar"); /* Si la condicion es verdadera, se presentara
            esto en pantalla */
        else //Si la nueva condicion tambien es falsa, pasa a esta linea de codigo
            printf("\nImpar"); //Entonces se presenta por pantalla este dato
}
