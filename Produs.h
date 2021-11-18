#include <iostream>
#include  <bits/stdc++.h>

#ifndef Produs_h
#define Produs_h

class Produs{
protected:
   char cod[6];
   int pret;
public:
    Produs(){};
    Produs(char [], int );
    void set(char [], int);
    char get_cod();
    int get_pret();
    void afisare();
    void citire();
};






#endif // Produs_h
