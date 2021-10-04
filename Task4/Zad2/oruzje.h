#ifndef ORUZJE_H
#define ORUZJE_H
#include "tocka.h"


class oruzje
{
    private:
        Tocka polozaj;
        int trenutni_broj_metaka;
        int broj_metaka=5;

    public:
        void postavi_polozaj();
        void shoot();
        void reload();
        Tocka get_polozaj();
        int get_trenutni_broj_metaka();
        int get_broj_metaka();

};

#endif // ORUZJE_H
