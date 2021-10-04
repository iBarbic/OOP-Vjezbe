#include "kolaci.h"

using namespace food;
Kolaci::Kolaci(double _potrosnja_samostalno,string _vrsta, string _naziv, double _voda, double _proteini,
                double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane)
               :Food(_vrsta,_naziv, _voda, _proteini,
                        _masti, _ugljikohidrati, _rok_trajanja, _dnevna_kol_hrane){


    potrosnja_samostalno=_potrosnja_samostalno;
}
