#include <stdio.h>
#include <math.h>
/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.

NUM: variable de tipo entero. */
void main(void) //Sirve como punto de entrada del programa
{
    int NUM; //Define variables numericas con numeros de tipo entero
    printf("Ingresa el numero para calcular la serie: "); //Presenta en la pantalla algun dato
    scanf("%d", &NUM); //Lee caracteres ingresados des
    if (NUM > 0) //Se utiliza para establece una condicion
    {
        printf("\nSerie de ULAM\n");
        printf("%d \t", NUM);
        while (NUM != 1) /*Permite selccionar el bloque de instucciones que se va a 
        ejecutar dentro de varias opciones */
        {
            if (pow(-1, NUM) > 0)
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1;
                printf("%d \t", NUM);
        }
    }
    else //Si la condicion es falsa pasa a esta linea de codigo
    printf("\n NUM debe ser un entero positivo");
} //Fin del programa
