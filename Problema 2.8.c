#include <stdio.h>
/* Asistentes.
El programa, al recibir como datos la matrícula, la carrera, el semestre 
y el promedio de un alumno de una universidad privada, determina si
éste puede ser asistente de su carrera. 
MAT, CAR y SEM: variables de tipo entero.
PRO: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  int MAT, CAR, SEM; //Define variables numericas con numeros de tipo entero
  float PRO; //Se utiliza para los numeros con puntos decimales
  printf("Ingrese matrícula: "); //Presenta en la pantalla algun dato
  scanf("%d", &MAT); //Lee caracteres ingresados desde el teclado
  printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica): ");
  scanf("%d", &CAR);
  printf("Ingrese semestre: ");
  scanf("%d", &SEM);
  printf("Ingrese promedio: ");
  scanf("%f", &PRO);
  switch(CAR) /*Permite selccionar el bloque de instucciones que se va a 
  ejecutar dentro de varias opciones */
  {
    case 1: if (SEM >= 6 && PRO >= 8.5) /* Dependiendo del valor de la variable, 
    ejecuta un bloque de instrucciones */
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break; //Finaliza la ejecucion del bucle
    case 2: if (SEM >= 5 && PRO >= 9.0)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
    case 3: if (SEM >= 6 && PRO >= 8.8)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
    case 4: if (SEM >= 7 && PRO >= 9.0)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
      break;
    default: printf("\n Error en la carrera"); //Permite especificar el valor por defecto de un campo
      break;
  }
}//Fin del programa