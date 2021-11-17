#include "Produs.h"
#include "Electrocasnic.h"
#include "TV.h"

TV(char c[], int i, char *n, double ii, char *nn)
{
    diagonal=ii;
    info_suplimentare=nn;
}

TV(const TV &c):Electrocasnic(c)
{
    diagonal=c.diagonal;
    info_suplimentare=c.ionf_suplimentare;
}

TV& operator=(const TV &c)
{
    Electrocasnic::operator=(c);
    diagonal=c.diagonal;
    info_suplimentare=c.info_suplimentare;
    return *this;
}

double get_diag()
{
    return diagonal;
}

char *info()
{
    return info_suplimentare;
}

void set_diag(double i)
{
    diagonal=i;
}

void set_info(char *i)
{
    info_suplimentare=i;
}

~TV()
{
    delete[] info_suplimentare;
}

void afisare3()
{
    cout<<diagonal<<endl;
    cout<<*info_suplimentare<<endl;
}

