#include "Produs.h"
#include "Electrocasnic.h"


Electrocasnic()
{
    marca=NULL;
}

Electrocasnic(int i, char *m):Produs(i)
{
    marca=NULL;
    sett_marca(m);
}

Electrocasnic(const Electrocasnic &c):Produs(c)
{
    marca=NULL;
    sett_marca(c.marca);
}

~Electrocasnic()
{
    delete[] marca;
}

Electrocasnic operator=(const Electrocasnic &c)
{
    cod=c.cod;
    prec=c.pret;
    sett_marca(c.marca)
    return *this;
}

char* get_marca()
{
    return marca;
}

void sett_marca(char* n)
{

    if (marca!=NULL)
        delete[] marca;
    if (n!=NULL)
    {
        marca=new char[strlen(n)+2];
        strcpy(marca,n);
    }
    else
        marca=NULL;
}

void afisare2()
{
    cout<<marca<<endl;;
}
