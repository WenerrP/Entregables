#include <stdio.h> //Librerias
#include <stdlib.h>

int main() //Sirve como punto de entrada del programa
{
    double x = 0.0; /* utilizado para definir variables numéricas 
    que contienen números con puntos decimales */
    double b = 0.0;
    double tmp = 0.0;
    int cont = 0; /* Se usa para definir variables numéricas que 
    contienen números enteros. */
    int c = 1;

    printf("Calculo Raiz Cuadrada con Metodo de Newton\n");
    //Se utiliza para imprimir por pantalla algun mensaje

    while(c) /* controla las repeticiones a partir de una condición 
    que se evalúa al inicio del ciclo */
    {
        printf("\nDame el numero decimal: ");
        scanf("%lf",&x); /* Lee datos de entrada a traves del teclado
        y los alamacena en la variable */

        if(x <= 0) /* Toma como entrada una condicion de forma de
        variable y ejecuta un bloque de instrucciones, segun sea 
        falsa o verdadera la condicion */
        {
            c = 0; /* Si la condicion del if es verdadera, se ejecuta
            esta instruccion */
        }
        else //Si la condicion del if es falsa pasa a esta condicion
        {
            for(cont = 1, b=x; !(b == (x / b)); cont++) /* Se define un 
            entero que contendrá el contador */
            {
                b=0.5*((x/b)+b);
                if(tmp != b) //Se utiliza para establece una condicion
                {
                    printf("\nCiclo %d valor actual es: %lf\n",cont,b);
                    //Presenta en la pantalla algun dato
                    tmp = b;
                }
                else
                {
                    break; //Se utiliza para salir de un ciclo
                }

                if(cont >100)
                {
                    break;
                }
            }
        }

    }
    printf("\nFin de programa\n");
    //printf("\nRaiz cuadrada de %f es: %f\n",x,b);
    //printf("\nEl calculo fue realizado con %d cliclos", cont);
    return 0; //Regresas un valor de 0 para indicar que todo ha salido bien
}