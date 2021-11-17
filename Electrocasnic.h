#include <iostream>
#include  <bits/stdc++.h>

#ifndef Electrocasnic_h
#define Electrocasnic_h

class Electrocasnic : public Produs{
protected:
    char *marca;
public:
    Electrocasnic();
    Electrocasnic(int , char *):Produs();
    Electrocasnic(const Electrocasnic &): Produs();
    ~Electrocasnic();
    Electrocasnic operator=(const Electrocasnic &);
    char* get_marca();
    void sett_marca(char*);
    void afisare2();
};

#endif // Electrocasnic_h
