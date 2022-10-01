#include <stdio.h> //Libreria
/* Incremento de salario. 
El programa, al recibir como dato el nivel de un profesor, incrementa su
➥salario en función de la tabla 2.3. 
NIV: variable de tipo entero.
SAL: variables de tipo real. */
void main(void) //Es el punto de entrada al programa
{
  float SAL; //Tipo de datos flotantes, define valores numericos con puntos decimales
  int NIV; //Define variables numericas con numeros de tipo entero
  printf("Ingrese el nivel académico del profesor: "); //Presenta en la pantalla algun dato
  scanf("%d", &NIV); //Lee caracteres ingresados desde el teclado
  printf("Ingrese el salario: ");
  scanf("%f", &SAL);
  switch(NIV) /*Permite selccionar el bloque de instucciones que se va a 
  ejecutar dentro de varias opciones */
  {
    case 1: SAL = SAL * 1.0035; /* Dependiendo del valor de la variable, 
    ejecuta un bloque de instrucciones */
      break; //Finaliza la ejecucion del bucle
    case 2: SAL = SAL * 1.0041; 
      break;
    case 3: SAL = SAL * 1.0048; 
      break;
    case 4: SAL = SAL * 1.0053; 
      break;
  }
  printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL); //Se imprime por pantalla el resultado de las operaciones
} //Fin del programa