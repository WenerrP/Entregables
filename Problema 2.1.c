#include <stdio.h> //Libreria
/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6.
PRO: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{ 
  float PRO; //Tipo de datos flotantes, define valores numericos con puntos decimales
  printf("ingrese el promedio del alumno: "); //Presenta en la pantalla algun dato
  scanf("%f", &PRO); //Lee caracteres ingresados desde el teclado
  if (PRO >= 6) //Se utiliza para establece una condicion
    printf("\nAprobado");
} //Fin del programa