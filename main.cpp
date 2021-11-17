#include <iostream>
#include "Angajat.h"


using namespace std;

int main()
{
    int n,salar;
    cout<<"Nr de angajati: "<<"\n";
    cin>>n;
    Angajat *a=new Angajat[n];
    char k[25], CNP[14];
    for (int i=0; i<n; i++)
    {
        cin.get();
        cin.get(k, 30);
        cin.get(CNP, 14);
        cin>>salar;
        Angajat p(k, CNP, salar);
        a[i].modificare(p);

    }
    a.sortare(n);
    a.afisare();
    a.modificare(p);
    int contor=0;
    for (int i=0; i<n; i++)
    {
        if (a[i].eFemeie()==true)
            contor++;
        cout<<"Sunt "<<contor<<" femei\n";
        cout<<"Sunt "<<n-contor<<" barbati\n";
    }
    contor=0;
    int z;
    for(i=0; i<n; i++)
    {
        if (z=a[i]>3000)
            contor++;
    }
    cout<<"Sunt "<<contor<<" cu salariu mai mare de 3000 de lei";


    return 0;
}
