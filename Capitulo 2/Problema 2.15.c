#include <stdio.h>
/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
número de días de internación de un cliente en un spa, calcula el costo
total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
    int TRA, EDA, DIA; //Define variables numericas con numeros de tipo entero
    float COS; //Se utiliza para los numeros con puntos decimales
    printf("Ingrese tipo de tratamiento, edad y días: "); //Presenta en la pantalla algun dato
    scanf("%d %d %d", &TRA, &EDA, &DIA); //Lee caracteres ingresados desde el teclado
    switch(TRA) /*Permite selccionar el bloque de instucciones que se va a 
        ejecutar dentro de varias opciones */
    {
        case 1: COS = DIA * 2800; /* Dependiendo del valor de la variable, 
        ejecuta un bloque de instrucciones */
            break; //Finaliza la ejecucion del bucle
        case 2: COS = DIA * 1950; 
            break;
        case 3: COS = DIA * 2500; 
            break;
        case 4: COS = DIA * 1150; 
            break;
        default: COS = -1; 
            break;
    }
    if (COS != -1) //Se utiliza para establece una condicion
    {
        if (EDA >= 60) //Se utiliza para establece una condicion
            COS = COS * 0.75;
        else //Si la condicion es falsa pasa a esta linea de codigo
            if (EDA <= 25)
                COS = COS * 0.85;
        printf("\nClave tratamiento: %d\t Días: %d\t Costo total: %8.2f", TRA, DIA, COS);
        // Si la condicion es falsa se presenta por pantalla el siguiente mensaje 
    }
    else //Si la condicion es falsa pasa a esta linea de codigo
    printf("\nLa clave del tratamiento es incorrecta"); /* Si la condicion es falsa
    se presenta por pantalla el siguiente mensaje */
}