#include "tofu.h"
using namespace food;
Tofu::Tofu(double _potrosnja_prilog,double _potrosnja_samostalno,string _vrsta,
                string _naziv, double _voda, double _proteini, double _masti,
                double _ugljikohidrati, string _rok_trajanja,
                double _dnevna_kol_hrane)
                :Vege(_potrosnja_prilog, _potrosnja_samostalno, _vrsta, _naziv,
                        _voda, _proteini,  _masti,  _ugljikohidrati,  _rok_trajanja,_dnevna_kol_hrane){}
