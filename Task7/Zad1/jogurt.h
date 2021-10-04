#ifndef JOGURT_H
#define JOGURT_H
#include "mlijecni.h"

namespace food{
class Jogurt : public Mlijecni
{
    public:
        Jogurt(double _potrosnja_jela,double _potrosnja_samostalno,string _vrsta, string _naziv,
               double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja,
               double _dnevna_kol_hrane);

        double get_kol(){
            return potrosnja_samostalno + potrosnja_jela;
        }
        friend ostream & operator<<(std::ostream &os, const Jogurt& c){
            c.printMyself(os);
            return os;
        }

       friend istream & operator>>(istream & is, Jogurt& m){
                is  >> m.potrosnja_samostalno
                    >> m.potrosnja_jela>>m.vrsta>>m.naziv>>m.voda>>m.protein>>m.masti
                    >> m.ugljikohidrati>>m.rok_trajanja>>m.dnevna_kol_hrane;
                return is ;
        }
    protected:

};
}
#endif // JOGURT_H
