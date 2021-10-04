#include <iostream>
#include <ctime>
#include "food.h"
#include <vector>
#include "prsut.h"
#include "mesni.h"
#include "meso.h"
#include "sunka.h"
#include "mlijecni.h"
#include "jogurt.h"
#include "mlijeko.h"
#include "sir.h"
#include "vege.h"
#include "hummus.h"
#include "riza.h"
#include "tofu.h"
#include "kolaci.h"
#include "krempita.h"
#include "madjarica.h"
#include "torta.h"
using namespace std;
using namespace food;

int main()
{
/*
    vector<Food> v;
    Food f("meso","batak",10.5,10,10,10,"04-04-2021",30);
    Food g("kruh","pogaca",10.5,10,10,10,"03-03-2021",30);
    Food l("kruh","pogaca",10.5,10,10,10,"03-03-2021",30);
    //f.print();
    Food k(g);
    //k.print();
    v.push_back(f);
    v.push_back(g);
    v.push_back(l);
    v.push_back(k);
    v[0].print();
    for(int i=0;i<4;i++){
        v[i].dodaj(2019,5,300);
        v[i].dodaj(2019,6,500);
    }


    for (int i=0;i<4;i++){
        if(v[i].potrosnja()==1){
            v[i].change_dnevna(true);
        }
         if(v[i].potrosnja()==-1){
            v[i].change_dnevna(false);
        }
}


*/
    vector<Food*> k;
    Prsut p(5,52,"Mesni","Prsut",6,7,9,5,"04-04-2021",9);
    k.push_back(&p);
    Meso m(5,52,"Mesni","Meso",6,7,9,5,"04-04-2021",9);
    k.push_back(&m);
    Sunka s(5,52,"Mesni","Sunka",6,7,9,5,"04-04-2021",9);
    k.push_back(&s);
    Jogurt j(5,52,"Mlijecni","Jogurt",6,7,9,5,"04-04-2021",9);
    k.push_back(&j);
    Krempita kr(52,"Kolaci","Krempita",6,7,9,5,"04-04-2021",9);
    k.push_back(&kr);
    Madjarica ma(52,"Kolaci","Madjarica",6,7,9,5,"04-04-2021",9);
    k.push_back(&ma);
    Mlijeko ml(52,5,"Mlijecni","Mlijeko",6,7,9,5,"04-04-2021",9);
    k.push_back(&ml);
    Riza r(5,52,"Vege","Riza",6,7,9,5,"04-04-2021",9);
    k.push_back(&r);
    Sir si(5,52,"Mlijecni","Sir",6,7,9,5,"04-04-2021",9);
    k.push_back(&si);
    Tofu t(5,52,"Vege","Tofu",6,7,9,5,"04-04-2021",9);
    k.push_back(&t);
    Torta to(52,"Kolaci","Torta",6,7,9,5,"04-04-2021",9);
    k.push_back(&to);
    Hummus h(5,52,"Vege","Hummus",6,7,9,5,"04-04-2021",9);
    k.push_back(&h);
    vector<Food*>::iterator it;
    double total=0.0;
    //cin>>m;


     for (int i = 0; i < k.size(); i++) {

		total=total+k[i]->get_kol();
		cout << *k.at(i) << endl;
	}
    cout<<total<<endl;
    //cin>>m;
    //cout<<t;














}
