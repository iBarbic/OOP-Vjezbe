#include <iostream>
#include "meta.h"
using namespace std;

int main()
{

    meta m1,m2,m3;
    m1.postavi_metu_sam(-1,-9,-1);
    m2.postavi_m();
    cout<<m2.get_p().get_z()<<" "<<m2.get_p().get_z()<<" "<<m2.get_p().get_z();



}
