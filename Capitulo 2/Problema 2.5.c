#include <stdio.h> //Libreria
#include <math.h> //Linreria
/* Función matemática.
El programa obtiene el resultado de una función.
OP y T: variables de tipo entero.
RES: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
    int OP, T; //Define variables numericas con numeros de tipo entero
    float RES; //Se utiliza para los numeros con puntos decimales
    printf("Ingrese la opcion del calculo y el valor entero: "); //Presenta en la pantalla algun dato
    scanf("%d %d", &OP, &T); //Lee caracteres ingresados desde el teclado
    switch(OP) /*Permite selccionar el bloque de instucciones que se va a 
    ejecutar dentro de varias opciones */
    {
        case 1: RES = T / 5; /* Dependiendo del valor de la variable, 
        ejecuta un bloque de instrucciones */
            break; //Finaliza la ejecucion del bucle
        case 2: RES = pow(T,T);
        /* La función pow está definida en la biblioteca math.h */
            break;
        case 3:
        case 4: RES = 6 * T/2;
            break;
        default: RES = 1; //Para especificar el caso predeterminado en la instrucción switch.
            break;
    }
    printf("\nResultado: %7.2f", RES); //Se imprime por pantalla el resultado de las operaciones
} //Fin del programa
