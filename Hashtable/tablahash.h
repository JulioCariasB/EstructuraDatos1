#ifndef TABLAHASH_H
#define TABLAHASH_H
#include "contacto.h"
#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;


class TablaHash
{
    public:
        static const int Tamanio = 10;
        Contacto * Hashtable[Tamanio];
        TablaHash();

        int Hash(char * Llave);
        void AgregarContacto(Contacto * Contac);
        Contacto * BuscarContacto(Contacto * Contac);
        void ElimianrContacto(Contacto * Contac);
        void ImprimirContactosPorIndex(int Index);
        void ImprimirTabla();
        int numeroItensPorIndex(int index);
        virtual ~TablaHash();
    protected:
    private:
};

#endif // TABLAHASH_H
