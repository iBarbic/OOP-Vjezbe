#ifndef ORUZJE_H
#define ORUZJE_H
#include "tocka.h"


class oruzje
{
    private:
        Tocka polozaj;
        int trenutni_broj_metaka;
        int broj_metaka;

    public:
        void postavi_polozaj();
        void shoot();
        void reload();
        Tocka get_polozaj()const;
        int get_trenutni_broj_metaka()const;
        int get_broj_metaka()const;
        void set_broj_metaka(int a=100);

};

#endif // ORUZJE_H
