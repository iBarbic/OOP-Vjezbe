#ifndef MESNI_H
#define MESNI_H
#include "food.h"

namespace food{
class Mesni: public Food
{


    protected:
        double potrosnja_samostalno;
        double potrosnja_jela;
        virtual void printMyself(std::ostream& os) const
        {
            os << "Naziv " <<naziv<< endl;
            os << "Potrosnja jela " << potrosnja_jela <<" "<<"kg"<<endl;
            os << "Potorsnja jela samostalno " << potrosnja_samostalno<<" "<<"kg"<<endl;
        }


    public:
        Mesni(double _potrosnja_samostalno,double _potrosnja_jela,string _vrsta, string _naziv,
               double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane);
        double get_kol(){
                return potrosnja_samostalno+potrosnja_jela;
        }
        friend std::ostream & operator<<(std::ostream &os, const Mesni& b){
            b.printMyself(os);
            return os;
        }


};
}
#endif // MESNI_H
