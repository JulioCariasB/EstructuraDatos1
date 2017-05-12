#include <iostream>
#include "lista_contacto.h"

using namespace std;

int main()
{
    Lista_Contacto * lista = new Lista_Contacto();

    lista->Insertar(98,"Julio Carias");
    lista->Insertar(28,"Luis Fajardo");
    lista->Insertar(43,"Carlos Pavon");
    lista->Imprimir();
}
