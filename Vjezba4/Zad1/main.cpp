#include <iostream>
#include "tocka.h"
using namespace std;

int main()
{
    Tocka t1,t2,t3;
    t1.postavi_random(20,50);
    t2.postavi_random(-100,50);
    t3.postavi_random(-100,100);

    cout<<t1.get_x()<<endl;
    cout<<t1.get_y()<<endl;
    cout<<t1.get_z()<<endl;
    cout<<t2.get_x()<<endl;
    cout<<t2.get_y()<<endl;
    cout<<t2.get_z()<<endl;
    cout<<t3.get_x()<<endl;
    cout<<t3.get_y()<<endl;
    cout<<t3.get_z()<<endl;



}
