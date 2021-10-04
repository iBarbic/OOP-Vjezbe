#ifndef VEGE_H
#define VEGE_H
#include "food.h"

namespace food{
class Vege: public Food
{
    protected:
        double potrosnja_samostalno;
        double potrosnja_prilog;
        virtual void printMyself(std::ostream& os) const
        {
            os << "Naziv " <<naziv<< endl;
            os << "Potrosnja jela prilog  " << potrosnja_prilog <<" "<<"kg"<<endl;
            os << "Potorsnja jela samostalno " << potrosnja_samostalno<<" "<<"kg"<<endl;
        }
    public:
        Vege(double _potrosnja_samostalno,double _potrosnja_prilog,string _vrsta, string _naziv,
               double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane);

        double get_kol(){
            return potrosnja_samostalno + potrosnja_prilog;
        }
        friend std::ostream & operator<<(std::ostream &os, const Vege& b){
            b.printMyself(os);
            return os;
        }

};
}
#endif // VEGE_H

