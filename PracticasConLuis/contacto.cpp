#include "contacto.h"

Contacto::Contacto(int N_Tel, char * Nom)
{
    Num_Telefono = N_Tel;
    Nombre = Nom;
    Siguiente = NULL;
}

Contacto::~Contacto()
{
    //dtor
}
