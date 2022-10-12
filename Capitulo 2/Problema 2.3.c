#include <stdio.h>

/*Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6, 
o reprobado en caso contrario.

PRO: variable de tipo real.  */

void main (void) //Es el punto de entrada al programa
{
    float PRO; //Tipo de datos flotantes, define valores numericos con puntos decimales
    printf("Ingrese el promedio del alumno: "); //Presenta en la pantalla algun dato
    scanf("%f", &PRO); //Lee caracteres ingresados desde el teclado
    if (PRO >= 6.0) //Se utiliza para establece una condicion
        printf ("\nAprobado"); //Si la condicion verdadera, presentara esto en pantalla
    else
        printf("\nReprobado"); //En caso de que sea falta, presentara esto en pantalla

}