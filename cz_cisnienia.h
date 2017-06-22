#ifndef CZ_CISNIENIA_H
#define CZ_CISNIENIA_H

#include "czujnik.h"


class cz_cisnienia : public czujnik
{
    public:
        cz_cisnienia(string polozenie):czujnik(0,600, polozenie, "MPa"){};
        ~cz_cisnienia();

    protected:

    private:
};

#endif // CZ_CISNIENIA_H
