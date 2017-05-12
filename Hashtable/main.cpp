#include <iostream>
#include "tablahash.h"
#include "contacto.h"
#include <stdio.h>

using namespace std;

int main()
{
    TablaHash * Tabla = new TablaHash();

    Contacto * Contacto1 = new Contacto("LuisFajardo", 21521032, "Colvisula");
    Contacto * Contacto2 = new Contacto("JulioCarias", 21521004, "Toledo");
    Contacto * Contacto3 = new Contacto("JesusEnamorado", 21521034, "Villas del Sol");
    Contacto * Contacto4 = new Contacto("CarlosPavon", 21528424, "El Pedregal");
    Contacto * Contacto5 = new Contacto("ClaudioCardozo", 21528273, "Los Alamos");
    Contacto * Contacto6 = new Contacto("ClaudioCardozo", 21528273, "Los Alamos");
    Contacto * Contacto7 = new Contacto("ClaudioCardozo", 21528273, "Los Alamos");
    Contacto * Contacto8 = new Contacto("ClaudioCardozo", 21528273, "Los Alamos");
    Contacto * Contacto9 = new Contacto("ClaudioCardozo", 21528273, "Los Alamos");
    Contacto * Contacto10 = new Contacto("ClaudioCardozo", 21528273, "Los Alamos");

    Tabla->AgregarContacto(Contacto1);
    Tabla->AgregarContacto(Contacto2);
    Tabla->AgregarContacto(Contacto3);
    Tabla->AgregarContacto(Contacto4);
    Tabla->AgregarContacto(Contacto5);
    Tabla->AgregarContacto(Contacto6);
    Tabla->AgregarContacto(Contacto7);
    Tabla->AgregarContacto(Contacto8);
    Tabla->AgregarContacto(Contacto9);
    Tabla->AgregarContacto(Contacto10);

    Tabla->ElimianrContacto(Contacto4);

    Tabla->ImprimirTabla();

    return 0;
}
