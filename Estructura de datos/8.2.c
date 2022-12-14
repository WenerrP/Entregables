/*Implementar el TAD lista ordenada.*/

#include <stdio.h>
#include <stdilb.h>

Nodo* NuevoNodo(Telemento e)
{
    Nodo *nn ;
    nn = (Nodo*)malloc(sizeof(Nodo));
    nn -> e = e;
    nn -> Sig = NULL;
    return nn;
}
void InsertarOrd(Nodo** L, Telemento e)
{ 
    Nodo *Nuevo, *Ant, *Pos;
    Nuevo = NuevoNodo( e);
    if (*L == NULL)
        *L = Nuevo;
    else
        if ( e <= (*L)-> e)
        {
            Nuevo -> Sig = *L;
            *L = Nuevo;
        }

        else
        { /* la insercion se realiza no en la primera poscicion de la lista*/
            Ant = Pos = *L;
            while (( e > Pos-> e)&&(Pos->Sig != NULL) )
            {
                Ant = Pos;
                Pos = Pos->Sig;
            }
            if ( e > Pos-> e) // falta por comprobar el ultimo
                Ant = Pos;
            Nuevo -> Sig = Ant -> Sig;
            Ant -> Sig = Nuevo;
        }
}
void BorrarOrd(Nodo** L, Telemento e)
{
    Nodo *Ant, *Pos;
    int Encontrado=0;
    Ant=NULL;
    Pos= *L;
    while ((!Encontrado)&&(Pos != NULL))
    {
        Encontrado= ( e <= (Pos-> e));
        if (!Encontrado)
        {
            Ant = Pos;
            Pos = Pos->Sig;
        }
    }
    if (Encontrado) /* se corto la busqueda hay que ver si esta en lista*/
        Encontrado = ((Pos-> e) == e);
    if (Encontrado) /* si es verdadero hay que borrar*/
    {
        if (Ant == NULL) /* se borra en la primera posicion*/
            *L = Pos->Sig;
        else /* borrado en centro o final de lista*/
            Ant->Sig = Pos->Sig;
        free(Pos);
    }
}