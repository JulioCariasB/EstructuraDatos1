#ifndef LISTA_CONTACTO_H
#define LISTA_CONTACTO_H
#include <iostream>
#include <string>
#include <stdio.h>
#include "contacto.h"

using namespace std;


class Lista_Contacto
{
    public:
        Contacto * Inicio;

        Lista_Contacto();

        void Insertar(int Num_Tel, char * Nombre);
        void Imprimir();
        virtual ~Lista_Contacto();
    protected:
    private:
};

#endif // LISTA_CONTACTO_H
