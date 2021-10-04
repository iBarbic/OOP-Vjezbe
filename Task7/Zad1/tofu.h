#ifndef TOFU_H
#define TOFU_H
#include "vege.h"

namespace food{
class Tofu: public Vege
{
    public:
        Tofu(double _potrosnja_prilog,double _potrosnja_samostalno,string _vrsta,
                string _naziv, double _voda, double _proteini, double _masti,
                double _ugljikohidrati, string _rok_trajanja,
                double _dnevna_kol_hrane);

        double get_kol(){
            return potrosnja_samostalno + potrosnja_prilog;
        }
        friend ostream & operator<<(std::ostream &os, const Tofu& c){
            c.printMyself(os);
            return os;
        }
        friend istream & operator>>(istream & is, Tofu& m){
            is >> m.potrosnja_prilog
               >> m.potrosnja_samostalno>>m.vrsta>>m.naziv>>m.voda>>m.protein>>m.masti
               >>m.ugljikohidrati>>m.rok_trajanja>>m.dnevna_kol_hrane;
            return is;

       }
    protected:



};


}
#endif // TOFU_H
