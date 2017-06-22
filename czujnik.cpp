#include "czujnik.h"

czujnik::czujnik(int zakresg, int zakresd, string polozenie, string jednostka)
{
    this->polozenie = polozenie;
    this->zakresg = zakresg;
    this->zakresd = zakresd;
    this->jednostka = jednostka;
    this->stan = true;
}

czujnik::~czujnik()
{

}

void czujnik::zmiana_stanu()
{
    if (stan==true)
        stan=false;
    else
        stan=true;
}
