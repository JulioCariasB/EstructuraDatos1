#include "lista_contacto.h"

Lista_Contacto::Lista_Contacto()
{
    Inicio = NULL;
}

void Lista_Contacto::Insertar(int Num_Tel, char * Nombre)
{
    Contacto * Nuevo = new Contacto(Num_Tel, Nombre);
    if(Inicio == NULL)
    {
        Inicio = Nuevo;
        return;
    }
    Contacto * Temp = Inicio;

    while(Temp->Siguiente != NULL)
    {
        Temp = Temp->Siguiente;
    }
    Temp->Siguiente = Nuevo;
}

void Lista_Contacto::Imprimir()
{
    Contacto * Temp = Inicio;
    while(Temp != NULL)
    {
        printf("%d, %s \n ", Temp->Num_Telefono, Temp->Nombre);
        Temp = Temp->Siguiente;
    }
}

Lista_Contacto::~Lista_Contacto()
{
    //dtor
}
