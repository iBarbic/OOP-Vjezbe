#ifndef MLIJECNI_H
#define MLIJECNI_H
#include "food.h"
namespace food{
class Mlijecni : public Food
{
    protected:
        double potrosnja_samostalno;
        double potrosnja_jela;
        virtual void printMyself(std::ostream& os) const{
            os << "Naziv " <<naziv<< endl;
            os << "Potrosnja jela  " << potrosnja_jela <<" "<<"kg"<<endl;
            os << "Potorsnja jela samostalno " << potrosnja_samostalno<<" "<<"kg"<<endl;
        }

    public:
        Mlijecni(double _potrosnja_jela,double _potrosnja_samostalno,string _vrsta, string _naziv,
               double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja,
               double _dnevna_kol_hrane);

        double get_kol(){
            return potrosnja_samostalno + potrosnja_jela;
        }
        friend std::ostream & operator<<(std::ostream &os, const Mlijecni& b){
            b.printMyself(os);
            return os;
        }

};
}
#endif // MLIJECNI_H
