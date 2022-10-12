    #include <stdio.h>

    /*Serie.
    El programa imprime los terminos y obtiene la suma de una determinada serie.
    I, SSE y CAM: variable de tipo entero. */

    void main(void) //Sirve como punto de entrada del programa
    {
    int I = 2, CAM = 1; //Define variables numericas con numeros de tipo entero
    long SSE = 0; /* Es el tipo de dato de 80 bits de precisión extendida 
    soportado por el hardware x86 */
    while (I <= 2500)
    /* Permite selccionar el bloque de instucciones que se va a ejecutar dentro de varias opciones */
    {
        SSE = SSE + I; //Operacion aritmetica de suma de dos variables
        printf ("\t%d", I); //Presenta en la pantalla algun dato
        if (CAM) //Se utiliza para establece una condicion
        {
            I += 5;
            CAM--;
        }
        else //Si la condicion es falsa pasa a esta linea de codigo
        {
            I += 3;
            CAM++;
        }
    }
    printf("\nLa suma de la serie es: %ld", SSE);
    } //Fin del programa