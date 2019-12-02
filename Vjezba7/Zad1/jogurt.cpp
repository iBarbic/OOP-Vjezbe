#include "jogurt.h"
using namespace food;
Jogurt::Jogurt(double _potrosnja_jela,double _potrosnja_samostalno,string _vrsta, string _naziv,
               double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja,
               double _dnevna_kol_hrane)
               :Mlijecni(_potrosnja_jela, _potrosnja_samostalno, _vrsta, _naziv, _voda,
                            _proteini, _masti, _ugljikohidrati, _rok_trajanja, _dnevna_kol_hrane){}
