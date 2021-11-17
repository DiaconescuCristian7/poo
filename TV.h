#include <iostream>
#include  <bits/stdc++.h>

#ifndef TV.h
#define TV.h

class TV: public Electrocasnic{
     double diagonal;
     char *info_suplimentare;
public:
    TV(char [], int, char *, double, char *);
    TV(const TV &):Electrocasnic();
    TV& operator=(const TV &);
    double get_diag();
    char *info();
    void set_diag(double );
    void set_info(char *);
    TV();
    void afisare3();
};

#endif // TV
