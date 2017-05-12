#ifndef CONTACTO_H
#define CONTACTO_H
#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Contacto
{
    public:

        char * Nombre;
        int Numero_Telefonico;
        char * Direccion;
        Contacto * Siguiente;
        Contacto(char * Nom, int Num_Tel, char * Direc);
        virtual ~Contacto();
    protected:
    private:
};

#endif // CONTACTO_H
