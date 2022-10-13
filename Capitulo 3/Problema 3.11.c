#include <stdio.h>
/* Examen de admisión. 
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran éstas.
R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */
void main(void) //Sirve como punto de entrada del programa
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; //Define variables numericas con numeros de tipo entero
    float CAL; //Se utiliza para los numeros con puntos decimales
    printf("Ingresa la calificacion del alumno: "); //Presenta en la pantalla algun dato
    scanf("%f", &CAL); //Lee caracteres ingresados desde el teclado
    while (CAL != -1) /*Permite selccionar el bloque de instucciones que se va a 
    ejecutar dentro de varias opciones */
    {
        if (CAL < 4) //Se utiliza para establece una condicion
            R1++;//Incremento en uno del valor de la variable
        else //Si la condicion es falsa pasa a esta linea de codigo
            if (CAL < 6)
                R2++;
            else
                if (CAL < 8)
                    R3++;
                else
                    if (CAL < 9)
                        R4++;
                    else
                        R5++;
        printf("Ingresa la calificacion del alumno: ");
        scanf("%f", &CAL);
    }
    printf("\n0..3.99 = %d", R1);
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10 = %d", R5);
    } //Fin del programa