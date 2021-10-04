#ifndef KREMPITA_H
#define KREMPITA_H
#include "kolaci.h"

namespace food{
class Krempita : public Kolaci
{
    public:
        Krempita(double _potrosnja_samostalno,string _vrsta, string _naziv, double _voda, double _proteini,
                    double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane);

        double get_kol(){
            return potrosnja_samostalno;
        }
       friend ostream & operator<<(std::ostream &os, const Krempita& c){
            c.printMyself(os);
            return os;
        }
        friend istream & operator>>(istream & is, Krempita& m){
                is  >> m.potrosnja_samostalno
                    >> m.vrsta>>m.naziv>>m.voda>>m.protein>>m.masti
                    >>m.ugljikohidrati>>m.rok_trajanja>>m.dnevna_kol_hrane;
                return is ;

       }
    protected:



};


}
#endif // KREMPITA_H
