#ifndef META_H
#define META_H
#include <string>
#include "tocka.h"


class meta
{
    private:
       Tocka p;
       bool status=false;
       double visina=5;
       Tocka mp=p;
       Tocka mk;
    public:
        void postavi_m();
        void p_status(double z);
        bool get_status();
        Tocka get_p();
        Tocka get_mp();
        Tocka get_mk();
        void postavi_metu_sam(double a,double b,double c);


};

#endif // META_H
