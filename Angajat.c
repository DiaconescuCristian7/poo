#include "Angajat.h"

using namespace std;


Angajat::Angajat()
{
    nume=NULL;
    strcpy(CNP, "00000000000000");
    salariu=0;
}

Angajat::Angajat(char *v, char[],int n)
{
    nume=new char[strlen(nume)];
    strcpy(CNP, ch);
    salariu=n;
}

Angajat::Angajat (const Angajat & a)
{
    a.nume=new char[strlen(a.nume)];
    a.nume=nume;
    strcpy(CNP, a.CNP);
    salariu=a.salariu;

}

Angajat::~Angajat()
{
    delete[] nume;
}

void Angajat::afisare() const
{
    cout<<"Nume: "<<nume<<"\n";
    cout<<"CNP: "<<CNP<<"\n";
    cout<<"salariu: "<<salariu<<"\n";
}

void Angajat::modificare(const Angajat & a)
{
    a.nume=new char[strlen(a.nume)];
    a.nume=nume;
    strcpy(CNP, a.CNP);
    salariu=a.salariu;
}

int Angajati::getSalariu() const
{
    return salariu;
}
bool Angajati::eFemeie() const
{
    if (CNP[0]==2||CNP[0]==4||CNP[0]==6)
        return true;
    else
        return false;
}

void Angajati::sortare(int n)
{
    for (int i=0; i<n; i++)
        for (j=i+1; j<n; j++)
            swap (nume[i],nume[j]);
}
