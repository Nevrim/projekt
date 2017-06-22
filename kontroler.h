#ifndef KONTROLER_H
#define KONTROLER_H
#include <iostream>
#include <cstdlib>
#include <vector>
#include "naped.h"
#include "czujnik.h"
#include "m_wytworcza.h"

using namespace std;


class kontroler
{
    public:
        kontroler();
        ~kontroler();
        void akcja();
        void wczytaj_cz();
        void zmien_stan();
    protected:
        vector<naped*> napedy;
        vector<m_wytworcza*> m_w;
        vector<czujnik*> czujniki;
    private:
};

#endif // KONTROLER_H
