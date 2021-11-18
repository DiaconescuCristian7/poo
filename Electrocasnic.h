#include <iostream>
#include  <bits/stdc++.h>

#ifndef Electrocasnic_h
#define Electrocasnic_h

class Electrocasnic : public Produs{
protected:
    char *marca;
public:
    Electrocasnic();
    Electrocasnic(char[], int , char *);
    Electrocasnic(const Electrocasnic &): Produs();
    ~Electrocasnic();
    Electrocasnic operator=(const Electrocasnic &);
    char* get_marca();
    void set_marca(char*);
    void afisare();
    void citire();
};

#endif // Electrocasnic_h
