#incldue "Produs.h"

using namespace std;

Produs(){}
Produs::Produs char (c[],int p)
{
    str=new char[(strlen(c))+1];
    strcpy(str,c);
}

void Produs::set(char c[],int p)
{
    pret=p;
    strcpy(cod,c);
}

char Produs::get_cod()
{
	return cod;
}

char Produs::get_pret()
{
	return pret;
}

void Produs::afisare()
{
    
    cout<<cod;
    cout<<endl;
    cout<<pret<<endl;
}

void Produs::citire()
{
	cin.get(cod);
	cin>>pret;
}
