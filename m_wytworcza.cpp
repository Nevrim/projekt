#include "m_wytworcza.h"

m_wytworcza::m_wytworcza()
{
    //ctor
}

m_wytworcza::~m_wytworcza()
{
    //dtor
}

vector<czujnik*> m_wytworcza::stworz()
{
    vector <czujnik*> czujniki;
    czujnik *cz1 = new cz_temperatury("noga");
    czujniki.push_back(cz1);
    czujnik *cz2 = new cz_cisnienia("glowa");
    czujniki.push_back(cz2);
    czujnik *cz3 = new cz_temperatury("tors");
    czujniki.push_back(cz3);
    return czujniki;
}
