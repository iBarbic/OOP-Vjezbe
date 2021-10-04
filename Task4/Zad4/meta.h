#ifndef META_H
#define META_H
#include <string>
#include "tocka.h"


class meta
{
    private:
       Tocka p;
       bool status=false;
       double visina=10;
       Tocka mp=p;
       Tocka mk;
    public:
        void postavi_m();
        void p_status(double z);
        bool get_status()const;
        Tocka get_p()const;
        Tocka get_mp()const;
        Tocka get_mk()const;
        void postavi_metu_sam(double a,double b,double c);


};

#endif // META_H
