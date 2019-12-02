#include <iostream>
#include "tocka.h"
#include <vector>
#include <time.h>
#include <cstdlib>
#include "meta.h"
#include "oruzje.h"
using namespace std;

int main()
{
    srand (static_cast <unsigned> (time(0)));
    meta m;
    Tocka t;
    oruzje gun;
    gun.postavi_polozaj();
    gun.set_broj_metaka();
    gun.reload();
    t=gun.get_polozaj();
    vector<meta> v;
    for(int i=0;i<100;i++){
        meta m;
        m.postavi_m();
        Tocka mp,mk;
        mp=m.get_mp();
        mk=m.get_mk();
        cout<<mp.get_z()<<" "<<mk.get_z()<<endl;
        v.push_back(m);

    }
    cout<<t.get_z()<<endl;
    int i=0;
    while(gun.get_trenutni_broj_metaka()>0){
        Tocka p;
        gun.shoot();
        v[i].p_status(gun.get_polozaj().get_z());
        cout<<v[i].get_p().get_z()<<endl;
        i++;



    }
    for (int i=0;i<100;i++){
        cout<<"Meta"<<i+1<<" "<<v[i].get_status()<<endl;
    }

}
