#ifndef PRSUT_H
#define PRSUT_H
#include "mesni.h"

namespace food{
class Prsut : public Mesni
{
    public:
         Prsut(double _potrosnja_samostalno,double _potrosnja_jela,string _vrsta, string _naziv,
               double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane);

         double get_kol(){
                return potrosnja_samostalno+potrosnja_jela;
        }
        friend ostream & operator<<(std::ostream &os, const Prsut& c){
            c.printMyself(os);
            return os;
        }

        friend istream & operator>>(istream & is, Prsut& m){
            is  >> m.potrosnja_samostalno
                >> m.potrosnja_jela>>m.vrsta>>m.naziv>>m.voda>>m.protein>>m.masti
                >> m.ugljikohidrati>>m.rok_trajanja>>m.dnevna_kol_hrane;
            return is ;
       }


    protected:


    private:
};


}
#endif // PRSUT_H
