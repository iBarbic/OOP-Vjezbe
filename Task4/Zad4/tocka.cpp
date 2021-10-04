#include "tocka.h"
#include <cstdlib>
#include <math.h>
using namespace std;

    void Tocka::postavi(double a,double b,double c){
        x=a;
        y=b;
        z=c;
    }
    void Tocka::postavi_random(int a,int b){
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }

        x= a+static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/(b-a)));
        y= a+static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/(b-a)));
        z= a+static_cast <double> (rand()) / (static_cast <double> (RAND_MAX/(b-a)));
    }
    double Tocka::get_x()const{
        return x;
    }

    double Tocka::get_y()const{
        return y;
    }

    double Tocka::get_z()const{
        return z;
    }
    double Tocka::udaljenost2d(Tocka p)const{
        return sqrt(pow(x- p.x, 2) + pow(y- p.y, 2));
    }
    double Tocka::udaljenost3d(Tocka p)const{
        return sqrt(pow((x -p.x ), 2) + pow((y - p.y), 2) + pow((z - p.z), 2));
    }




