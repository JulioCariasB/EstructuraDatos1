#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Contacto
{
    public:
        int Num_Telefono;
        char * Nombre;
        Contacto * Siguiente;
        Contacto(int N_Tel, char * Nom);
        virtual ~Contacto();
    protected:
    private:
};

#endif // CONTACTO_H
