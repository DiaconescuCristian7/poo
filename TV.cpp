#include "Produs.h"
#include "Electrocasnic.h"
#include "TV.h"

TV::TV()
{
	info_suplimentare=NULL;
}
TV::TV(char c[], int i, char *n, double ii, char *nn):Electrocasnic (c,i,n)
{
	
    diagonal=ii;
    info_suplimentare=NULL;
    info_suplimentare=nn;
}

TV::TV(const TV &c):Electrocasnic(c)
{
    diagonal=c.diagonal;
    info_suplimentare=NULL;
    info_suplimentare=c.ionf_suplimentare;
}

TV::TV& operator=(const TV &c)
{
    Electrocasnic::operator=(c);
    diagonal=c.diagonal;
    info_suplimentare=c.info_suplimentare;
    return *this;
}

double TV::get_diag()
{
    return diagonal;
}

char *TV::info()
{
    return info_suplimentare;
}

void TV::set_diag(double i)
{
    diagonal=i;
}

void TV::set_info(char *i)
{
    info_suplimentare=i;
}

TV::~TV()
{
    delete[] info_suplimentare;
}

void TV::afisare()
{
    cout<<diagonal<<endl;
    Electrocasnic:afisare();
    if(info_suplimentare)
    cout<<info_suplimentare<<endl;
}

void TV::sortare()
{
	for (int i=0; i<n; i++)
        for (j=i+1; j<n; j++)
        swap(diag[i],diag[j]);
}

void TV::citire()
{
	Electrocasnic::citire();
	cin>>diagonal;
	cin.get(info_suplimentare);
}
