#include "meta.h"
#include <cstdlib>
#include <math.h>
#include "tocka.h"
using namespace std;

    void meta::postavi_m(){
        p.postavi_random(-20,20);
        mp=p;
        mk.postavi(p.get_x(),p.get_y(),p.get_z()+visina);
    }
    void meta::p_status(double k){
        if(k>mp.get_z() && k<mk.get_z())
            status=true;
    }
    bool meta::get_status()const{
        return status;
    }
    Tocka meta::get_mk()const{
        return mk;
    }
     Tocka meta::get_mp()const{
        return mp;
    }
     Tocka meta::get_p()const{
        return p;
    }
    void meta::postavi_metu_sam(double a,double b,double c){
        p.postavi(a,b,c);

    }








