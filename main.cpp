#include <iostream>
#include "TV.h"


using namespace std;

int main()
{
    int n;
    cout<<"Nr de produse:"<<endl;
    cin>>n;
    TV  *t;
    t=new TV[strlen(n)];
    for (int i=0; i<n; i++)
    {
	t[i].citire();
	}
	
	for (int i=0; i<n; i++)
	{
		if (t[i].pret>150 && strcmp(t[i].marca,"LG")==0 && 
	}
    return 0;
}
