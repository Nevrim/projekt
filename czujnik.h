#ifndef CZUJNIK_H
#define CZUJNIK_H
#include <iostream>
#include <cstdlib>

using namespace std;


class czujnik
{
    public:
        czujnik(int zakresg, int zakresd, string polozenie, string jednostka);
        ~czujnik();
        void show() {
            if(stan == true)
                cout << polozenie << " " << zakresd + rand() % (zakresg - zakresd + 1) << " " << jednostka << " " << endl;
            else
                cout << polozenie << " " <<  jednostka << " wylaczony " << endl;
            }
        void zmiana_stanu();
    protected:
        int zakresg;
        int zakresd;
        string polozenie;
        string jednostka;
        bool stan;
};

#endif // CZUJNIK_H
