#include "Produs.h"
#include "Electrocasnic.h"


Electrocasnic::Electrocasnic()
{
    marca=NULL;
}

Electrocasnic::Electrocasnic(char c, int i, char *m):Produs(c,i)
{
    marca=NULL;
    set_marca(m);
}

Electrocasnic::Electrocasnic(const Electrocasnic &c):Produs(c)
{
    marca=NULL;
    set_marca(c.marca);
}

Electrocasnic::~Electrocasnic()
{
    delete[] marca;
}

Electrocasnic::Electrocasnic operator=(const Electrocasnic &c)
{
    cod=c.cod;
    //strcpy
    prec=c.pret;
    set_marca(c.marca)
    return *this;
}

char* Electrocasnic::get_marca()
{
    return marca;
}

void Electrocasnic::set_marca(char* n)
{

    if (marca!=NULL)
        delete[] marca;
    if (n!=NULL)
    {
        marca=new char[strlen(n)+1];
        strcpy(marca,n);
    }
    else
        marca=NULL;
}

void Electrocasnic::afisare()
{	Produs::afisare();
if (marca)

    cout<<marca<<endl;
}

void Electrocasnic::citire()
{	
	Produs::citire();
	cin.get(marca);
}
