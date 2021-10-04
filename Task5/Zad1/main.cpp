#include <iostream>
#include <ctime>
#include "food.h"
#include <vector>

using namespace std;

int main()
{
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














}
