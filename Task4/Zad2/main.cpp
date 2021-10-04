#include <iostream>
#include "oruzje.h"
#include "tocka.h"

using namespace std;

int main()
{
    Tocka t;
    oruzje gun;
    gun.postavi_polozaj();
    cout<<gun.get_polozaj().get_z()<<endl;
    gun.reload();
    gun.shoot();
    cout<<gun.get_trenutni_broj_metaka();



}
