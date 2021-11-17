#include <iostream>
#include  <bits/stdc++.h>

#ifndef Angajat_h
#define Angajat_h

class Angajat{
char*nume;
char CNP[14];
int salariu;
public:
Angajat(); //constr. fara param; util pt. alocarea spatiului pt. elem. din vectorul cu angajati;
 // nume=NULL; CNP este de ex: �000..0�; salariu=0
Angajat(char*, char[], int);//constr. cu param; pentru a initializa cu valori toate atributele;
Angajat(const Angajat&); //constructor de copiere � se apeleaza automat la transmiterea
//parametrilor in fctii prin valoare; returnarea obj din fctii prin valoare;
 // puneti cout<<�const de copiere�; in impl. ca sa vedeti unde e apelat;
~ Angajat(); //elibereaza spatiu ocupat de obiecte
void afisare() const; //afiseaza toate atributele unui angajat
void modificare(const Angajat&); // face o copie profunda a parametrului si o stocheaza in
//objectul cu care se face apelul;
int getSalariu() const;
bool eFemeie() const;
void Angajati::sortare(int);
}; //si orice alta metoda considerati ca mai este necesara
#endif // Angajat


