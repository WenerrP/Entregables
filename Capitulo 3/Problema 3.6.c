#include <stdio.h>

/*Nomina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
universidad, obtiene la nomina y el promedio de los salarios.

I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

void main(void) //Sirve como punto de entrada del programa
{
    int I = 0; //Define variables numericas con numeros de tipo entero
    float SAL, PRO, NOM = 0; //Se utiliza para los numeros con puntos decimales
    printf("Ingrese el salario del profesor:\t"); //Presenta en la pantalla algun dato
    /*Observa que al menos se necesita ingresar el salario de un profesor para que
    no ocurra un error de ejecucion del programa. */
    scanf("%f", &SAL); //Lee caracteres ingresados desde el teclado
    do //se utiliza para especificar un ciclo condicional que se ejecuta al menos una vez
    {
        NOM = NOM + SAL; //Operacion aritmetica de suma de dos variable
        I = I + 1; //Operacion aritmetica de suma de una variable mas uno
         printf("Ingrese el salario del profesor -0 para temrinar -:\t");
        scanf("%f", &SAL);
    }
    while (SAL); /* Ejecuta un bloque de instrucciones en un bucle siempre 
    que esta condición sea verdader */
    PRO = NOM / I; /* Operacion aritmetica de division de una variable 
    dentro de otra variable */
    printf("\nNomina: %2f \t Promedio de salarios: %.2f", NOM, PRO);
} //Fin del programa