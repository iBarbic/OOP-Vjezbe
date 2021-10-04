#include "food.h"
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;


int Food::izvuci(){
    string a;
    a=rok_trajanja.substr(6,10);
    int b = atoi(a.c_str());
    //cout<<b<<endl;
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    int c = b - (now->tm_year+1900);
    //cout << c<<endl;

    return c;

}


Food::Food(string v, string n, double vo, double pro, double m, double u, string rok, double dnevna){

    vrsta = v;
    rok_trajanja = rok;
    naziv=n;
    voda=vo;
    protein=pro;
    masti=m;
    ugljikohidrati=u;

    dnevna_kol_hrane=dnevna;
    int broj=izvuci()*24;
    //cout<<broj<<endl;
    niz = new Pomocna[broj];
    cout<<"!!!!!"<<endl;
}

Food::Food(const Food &other){
    vrsta = other.vrsta;
    rok_trajanja = other.rok_trajanja;
    naziv=other.naziv;
    voda=other.voda;
    protein=other.protein;
    masti=other.masti;
    ugljikohidrati=other.ugljikohidrati;
    dnevna_kol_hrane=other.dnevna_kol_hrane;
    int broj=izvuci()*24;
    niz =new Pomocna[broj];
    //cout<<"!!!!!!!!!!!!"<<broj<<endl;
    copy(other.niz,other.niz+broj,niz);
    cout<<"??????"<<endl;

}

Food::~Food(){
    delete [] niz;
    cout<<"PPPPPPPP"<<endl;
}

void Food::change_dnevna(bool a){
    if(a)
        dnevna_kol_hrane+=1;
    else
        dnevna_kol_hrane-=1;
}
string Food::get_vrsta()const{
    return vrsta;
}
Pomocna* Food::get_niz()const{
    return niz;
}


void Food::dodaj(int y,int m,double kg){
    //cout<<y<<m<<endl;
    time_t t = time(0);
    tm* now = localtime(&t);
    bool a=false;
    int n=izvuci()*12;

    if(y==(now->tm_year+1900)){
        a=true;
        for(int i=0;i<n;i++){
            if(niz[i].get_m()==m)
                a=false;
    }

    }
    if(a==true){

        for(int j=0;j<n;j++){
            if(niz[j].get_y()==0){
                //cout<<m<<endl;
                niz[j].set_y(y);
                niz[j].set_m(m);
                niz[j].set_kg(kg);
                break;
            }
        }
    }
}
int Food::potrosnja(){
    int n=izvuci()*12;
    double ukupno_now;
    double ukupno_prethodna;
    time_t t = time(0);
    tm* now = localtime(&t);
    for(int i=0;i<n;i++){
        if(niz[i].get_y()!=0){

            if(niz[i].get_y()==now->tm_year+1899){
                ukupno_prethodna=ukupno_prethodna+niz[i].get_kg();

            }
            if(niz[i].get_y()==now->tm_year+1900){
                ukupno_now=ukupno_now+niz[i].get_kg();
            }

    }
        }

    if(ukupno_now>(ukupno_prethodna+(ukupno_prethodna/10))){
        cout<<"Poveæala se potrošnja "<<endl;
        return 1;

    }
    if(ukupno_now<(ukupno_prethodna-(ukupno_prethodna/10))){
        cout<<"smanjila se  se potrošnja"<<endl;
        return -1;
    }
    return 0;
}
void Food::print(){
    int n=izvuci()*12;
    cout<<"vrsta"<<" "<<vrsta<<endl
    <<"rok_trajanja"<<" "<<rok_trajanja<<endl
    <<"naziv"<<" "<<naziv<<endl
    <<"voda"<<" "<<voda<<endl
    <<"protein"<<" "<<protein<<endl
    <<"masti"<<" "<<masti<<endl
    <<"ugljikohidrati"<<" "<<ugljikohidrati<<endl
    <<"dnevna_kol_hrane"<<" "<<dnevna_kol_hrane<<endl;
    for(int i=0;i<n;i++){
        if(niz[i].get_y()!=0)
            cout<<niz[i].get_y()<<" "<<niz[i].get_m()<<" "<<niz[i].get_kg()<<endl;
    }

}


