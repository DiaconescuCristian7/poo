#incldue "Produs.h"

using namespace std;

Produs(){}
Produs(char c[],int p):pret(p)
{
    str=new char[(strlen(c))+1];
    strcpy(str,c);
}

void sett(char c[],int p)
{
    pret=p;
    strcpy(cod[6],c[]);
}

void get()
{
    return pret,cod[6];
}

void afisare1()
{
    for (int i=0; i<strlen(cod[]); i++)
        cout<<cod[i];
    cout<<endl;
    cout<<pret<<endl;
}


