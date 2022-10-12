#include <stdio.h>

/*Lanzamiento de martillo.
El programa, al recibir como dato N lanzamineto de martillo, calcula, el promedio
de los lanzamientos de la atleta cubana.

I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

void main(void) //Sirve como punto de entrada del programa
{
    int I, N; //Define variables numericas con numeros de tipo entero
    float LAN, SLA = 0; //Se utiliza para los numeros con puntos decimales
    do //se utiliza para especificar un ciclo condicional que se ejecuta al menos una vez
    {
        printf("Ingrese el numero de lanzamientos:\t"); //Presenta en la pantalla algun dato
        scanf("%d", &N); //Lee caracteres ingresados desde el teclado
    } 
    while (N < 1 || N > 11);
    /*Se utiliza la estructura do-while para verificar que el valor de N sea
    correcto. */
    for (I = 1; I <= N; I++) /* Hace que las instrucciones se repitan el número de veces que 
    le decimos, normalmente le ponemos un número ( o el valor de una variable o una constante) */
    {
        printf("\nIngrese el lanzamiento %d: ", I); //Presenta en la pantalla algun dato
        scanf("%f", &LAN); //Lee caracteres ingresados desde el teclado
        SLA = SLA + LAN; //Operacion aritmetica de suma de dos variables
    }
    SLA = SLA / N; //Operacion aritmetica de division de dos variables
    printf("\nEl promedio de lanzamiento es: %.2f", SLA);  
} //Fin del programa
