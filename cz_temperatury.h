#ifndef CZ_TEMPERATURY_H
#define CZ_TEMPERATURY_H

#include "czujnik.h"


class cz_temperatury : public czujnik
{
    public:
        cz_temperatury(string polozenie):czujnik(100, 200, polozenie, "stopnie Celcjusza"){}
        ~cz_temperatury();

    protected:

    private:
};

#endif // CZ_TEMPERATURY_H
