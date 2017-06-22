#include "naped.h"

naped::naped()
{
    //ctor
}

naped::~naped()
{
    //dtor
}

void naped::ruch(int wartosc)
{
    int a;
    a=rand()%2;
    if (a==1)
        cout << "Udalo sie poruszyc o " << wartosc <<  endl;
    else
        cout << "Niepowodzenie" << endl;
}

void naped::obrot(int kat)
{
    int a;
    a=rand()%2;
    if (a==1)
        cout << "Udalo sie obrocic o " << kat << " stopni" <<  endl;
    else
        cout << "Niepowodzenie" << endl;
}

