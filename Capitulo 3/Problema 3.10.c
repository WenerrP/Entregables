#include <stdio.h>
#include <math.h>

/*Pares e impares.
El problema, al recibir como datos N numeros enteros, obtiene la suma de los
numeros pares y calcula el promedio de los impares.

I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main(void) //Sirve como punto de entrada del programa
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; //Define variables numericas con numeros de tipo entero
    printf("Ingrese el numero de datos que se van a procesar:\t"); //Presenta en la pantalla algun dato
    scanf("%d", &N); //Lee caracteres ingresados desde el teclado
    if (N > 0) //Se utiliza para establece una condicion
    {
        for (I=1; I <= N; I++) /* Hace que las instrucciones se repitan el número de veces que 
        le decimos, normalmente le ponemos un número ( o el valor de una variable o una constante) */
        {
            printf("\nIngrese el numero %d: ", I); 
            scanf("%d", &NUM);
            if (NUM) //Se utiliza para establece una condicion
                if (pow(-1, NUM) > 0)
                    SPA = SPA + NUM;
                else //Si la condicion es falsa pasa a esta linea de codigo
                    {
                        SIM = SIM + NUM; //Operacion aritmetica de suma dos variables
                        CIM++; //Incremento en uno del conteo
                    }
        }
        printf("\n La suma de los numeros pares es: %d", SPA);
        printf("\n El promedio de numeros impares es: %5.2f", (float)(SIM / CIM));
    }
    else
    printf("\n El valor de N es incorrecto");
} //Fin del programa