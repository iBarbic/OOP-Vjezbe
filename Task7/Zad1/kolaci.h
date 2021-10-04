#ifndef KOLACI_H
#define KOLACI_H
#include "food.h"



namespace food{
class Kolaci : public Food
{
    protected:
        double potrosnja_samostalno;
        virtual void printMyself(std::ostream& os) const
        {
            os << "Naziv " <<naziv<< endl;
            os << "Potorsnja jela samostalno " << potrosnja_samostalno<<" "<<"kg"<<endl;
        }

    public:
        Kolaci(double _potrosnja_samostalno,string _vrsta, string _naziv, double _voda, double _proteini,
                double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane);


        double get_kol(){
            return potrosnja_samostalno;
        }
        friend std::ostream & operator<<(std::ostream &os, const Kolaci& b){
            b.printMyself(os);
            return os;
        }

};


}
#endif // KOLACI_H



