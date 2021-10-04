#ifndef FOOD_H
#define FOOD_H
#include "pomocna.h"
#include <iostream>
#include <string.h>
using namespace std;


class Food
{
    private:
        string vrsta;
        string naziv;
        double voda;
        double protein;
        double masti;
        double ugljikohidrati;
        string rok_trajanja;
        double dnevna_kol_hrane;
        Pomocna *niz;

    public:
        Food(string v,string n,double vo,double pro,double m,double u,string rok,double dnevna);
        Food(const Food &other);
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

};



#endif // FOOD_H
