#ifndef M_WYTWORCZA_H
#define M_WYTWORCZA_H
#include "czujnik.h"
#include <iostream>
#include <cstdlib>
#include "cz_temperatury.h"
#include "cz_cisnienia.h"
#include <vector>

using namespace std;


class m_wytworcza
{
    public:
        m_wytworcza();
        ~m_wytworcza();
        vector<czujnik*> stworz();
    protected:


    private:
};

#endif // M_WYTWORCZA_H
