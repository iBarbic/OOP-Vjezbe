#ifndef FOOD_H
#define FOOD_H
#include "pomocna.h"
#include <iostream>
#include <string.h>
using namespace std;

namespace food{
class Food
{
    protected:
        string vrsta;
        string naziv;
        double voda;
        double protein;
        double masti;
        double ugljikohidrati;
        string rok_trajanja;
        double dnevna_kol_hrane;
        Pomocna *niz;
        virtual void printMyself(std::ostream& os) const{}

    public:
        Food(string _vrsta, string _naziv, double _voda, double _proteini, double _masti, double _ugljikohidrati, string _rok_trajanja, double _dnevna_kol_hrane);
        Food(const Food &other);
        Food();
        ~Food();
        void change_dnevna(bool a);
        void dodaj(int y,int m,double kg);
        void set_vrsta(string s);
        void set_naziv(string s);
        void set_voda(double a);
        void set_protein(double a);
        void set_mast(double a);
        void set_uglji(double a);
        void set_rok_trajanja(string s);
        void set_dnevna_kol_hrane(double a);
        string get_vrsta()const;
        void get_dnevna_kol_hrane()const;
        string get_naziv()const;
        void get_voda()const;
        void get_protein()const;
        void get_mast()const;
        void set_uglj();
        void set_rok_trajanja();
        int izvuci();
        Pomocna* get_niz()const;
        int potrosnja();
        void print();
        virtual double get_kol(){
                return dnevna_kol_hrane;
        }

         friend std::ostream & operator<<(std::ostream &os, const Food& a){
            a.printMyself(os);
            return os;
        }




};
}

#endif // FOOD_H
