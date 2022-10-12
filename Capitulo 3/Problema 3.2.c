#include <stdio.h>

/*Suma positivo.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los
enteros positivos

I, N, NUM, SUM: variables de tipo entero. */

void main(void) //Sirve como punto de entrada del programa
{
    int I, N, NUM, SUM; //Define variables numericas con numeros de tipo entero
    SUM = 0; //Inicializacion de la variable en 0
    printf("Ingrese el numero de datos: \t"); //Presenta en la pantalla algun dato
    scanf("%d", &N); //Lee caracteres ingresados desde el teclado
    for (I = 1; I <= N; I++) /* Hace que las instrucciones se repitan el número de veces que 
    le decimos, normalmente le ponemos un número ( o el valor de una variable o una constante) */
    {
        printf("Ingrese el dato numero %d: \t", I);
        scanf("%d", &NUM);
        if(NUM > 0) //Se utiliza para establece una condicion
            NUM = SUM + NUM; //Operacion aritmetica de suma
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM);
}