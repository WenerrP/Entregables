# include <stdio.h>
/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
un empleado, determina si el mismo reúne las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal. 
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */
void main(void) //Es el punto de entrada al programa
{
    int CLA, CAT, ANT, RES; //Define variables numericas con numeros de tipo entero
    printf("\nIngrese la clave, categoría y antigüedad del trabajador: ");
    //Presenta en la pantalla algun dato
    scanf("%d %d %d", &CLA, &CAT, &ANT);
    //Lee caracteres ingresados desde el teclado
    switch(CAT) /*Permite selccionar el bloque de instucciones que se va a 
    ejecutar dentro de varias opciones */
    {
        case 3:/* Dependiendo del valor de la variable, 
        ejecuta un bloque de instrucciones */
        case 4: if (ANT >= 5)
            RES = 1;
        else
            RES = 0;
                break;
        case 2: if (ANT >= 7)
            RES = 1;
        else
            RES = 0;
                break;
        default: RES = 0; //Para especificar el caso predeterminado en la instrucción switch.
        break;
    }
    if (RES) //Se utiliza para establece una condicion
        printf("\nEl trabajador con clave %d reúne las condiciones para el puesto", CLA);
        /* Si la condicion es verdadera se presenta por pantalla el siguiente mensaje */
    else //Si la condicion es falsa pasa a esta linea de codigo
        printf("\nEl trabajador con clave %d no reúne las condiciones para el puesto", CLA);
        /* Si la condicion es falsa se presenta por pantalla el siguiente mensaje */
}
