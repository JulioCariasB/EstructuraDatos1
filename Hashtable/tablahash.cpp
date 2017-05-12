#include "tablahash.h"

TablaHash::TablaHash()
{
    for(int i=0; i<Tamanio; i++)
    {
        Hashtable[i] = new Contacto("NULL", 0, "NULL");
        Hashtable[i]->Siguiente = NULL;
    }
}


int TablaHash::Hash(char * Llave)
{
    int Hash = 0;  //Mi valor hash
    int Index = 0; //Iterar nuestro arreglo

    while(Llave[Index] != '\0')
    {
        Hash = Hash + (int)Llave[Index];
        Index++;
    }

    Index = Hash % Tamanio;
    return Index;
}

void TablaHash::AgregarContacto(Contacto * Contac)
{
    int Index = Hash(Contac->Nombre);

    if(Hashtable[Index]->Nombre == "NULL")
    {
        Hashtable[Index] = Contac;
    }
    else{
        Contacto * Temp = Hashtable[Index];
        Contacto * nuevo = Contac;

        while(Temp->Siguiente != NULL)
        {
            Temp = Temp->Siguiente;
        }
        Temp->Siguiente = nuevo;
    }

}

int TablaHash::numeroItensPorIndex(int index)
{
    int contador = 0;

    if(Hashtable[index]->Nombre == "NULL")
    {
        return contador;
    }

    contador++;
    Contacto * temp = Hashtable[index];

    while(temp->Siguiente != NULL)
    {
        contador++;
        temp = temp->Siguiente;
    }
    return contador;
}

Contacto * TablaHash::BuscarContacto(Contacto * Contac)
{
    int Index = Hash(Contac->Nombre);

    Contacto * Temp = Hashtable[Index];

    while(Temp != NULL)
    {
        if(Temp->Nombre == Contac->Nombre)
        {
            return Temp;
        }
        Temp = Temp->Siguiente;
    }
    return NULL;
}

void TablaHash::ElimianrContacto(Contacto * Contac)
{
    int Index = Hash(Contac->Nombre);

    if(Hashtable[Index]->Nombre == "NULL")
    {
        printf("No se encontro en esta lista \n");
        return;
    }

    if(Hashtable[Index]->Nombre == Contac->Nombre && Hashtable[Index]->Siguiente == NULL)
    {
        Hashtable[Index]->Nombre = "NULL";
        Hashtable[Index]->Numero_Telefonico = 0;
        Hashtable[Index]->Direccion = "NULL";
        return;
    }

    if(Hashtable[Index]->Nombre == Contac->Nombre)
    {
        Hashtable[Index] = Hashtable[Index]->Siguiente;
        return;
    }

    Contacto * Temp = Hashtable[Index];

    while(Temp != NULL)
    {
        if(Temp->Siguiente->Nombre == Contac->Nombre)
        {
            Temp->Siguiente = Temp->Siguiente->Siguiente;
            return;
        }
        Temp = Temp->Siguiente;
    }

}

void TablaHash::ImprimirContactosPorIndex(int Index)
{
    Contacto * Temp = Hashtable[Index];

    if(Temp->Nombre == "NULL")
    {
        printf("El %d esta vacio \n", Index);
    }
    else{
        printf("Index: %d \n", Index);
        while(Temp != NULL)
        {
            printf("------------------- \n");
            printf("%s \n", Temp->Nombre);
            printf("%d \n", Temp->Numero_Telefonico);
            printf("%s \n", Temp->Direccion);
            Temp = Temp->Siguiente;
        }

    }
}

void TablaHash::ImprimirTabla()
{
    for(int c=0; c<Tamanio; c++)
    {
        ImprimirContactosPorIndex(c);
        printf("**********************\n");
    }
}

TablaHash::~TablaHash()
{
    //dtor
}
