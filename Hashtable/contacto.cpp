#include "contacto.h"

Contacto::Contacto(char * Nom, int Num_Tel, char * Direc)
{
    Nombre = Nom;
    Numero_Telefonico = Num_Tel;
    Direccion = Direc;
    Siguiente = NULL;
}

Contacto::~Contacto()
{
    //dtor
}
