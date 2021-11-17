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
    void sett(char [], int);
    void get();
    void afisare1();
};






#endif // Produs_h
