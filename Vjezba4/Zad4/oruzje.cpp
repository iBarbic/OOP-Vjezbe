#include "oruzje.h"
#include <cstdlib>
#include <math.h>
#include "tocka.h"
using namespace std;

    void oruzje::postavi_polozaj(){
        polozaj.postavi_random(-20,20);

    }
    void oruzje::reload(){
        trenutni_broj_metaka=broj_metaka;
    }
    void oruzje:: shoot(){
        trenutni_broj_metaka-=1;
    }
    Tocka oruzje:: get_polozaj()const{
        return polozaj;
    }
    int oruzje:: get_trenutni_broj_metaka()const{
        return trenutni_broj_metaka;

    }
    int oruzje:: get_broj_metaka()const{
        return broj_metaka;
    }
    void oruzje::set_broj_metaka(int a){
        broj_metaka=a;
    }



