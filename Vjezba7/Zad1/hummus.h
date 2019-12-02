#ifndef HUMMUS_H
#define HUMMUS_H
#include "Vege.h"
namespace food{
class Hummus : public Vege
{
    public:
        Hummus(double _potrosnja_prilog,double _potrosnja_samostalno,string _vrsta,
                string _naziv, double _voda, double _proteini, double _masti,
                double _ugljikohidrati, string _rok_trajanja,
                double _dnevna_kol_hrane);

        double get_kol(){
            return potrosnja_samostalno + potrosnja_prilog;
        }
        friend ostream & operator<<(std::ostream &os, const Hummus& c){
            c.printMyself(os);
            return os;
        }
        friend istream & operator>>(istream & is, Hummus& m){
                is  >> m.potrosnja_prilog
                    >> m.potrosnja_samostalno>>m.vrsta>>m.naziv>>m.voda>>m.protein>>m.masti
                    >> m.ugljikohidrati>>m.rok_trajanja>>m.dnevna_kol_hrane;
                return is;
        }
    protected:


};
}
#endif // HUMMUS_H
