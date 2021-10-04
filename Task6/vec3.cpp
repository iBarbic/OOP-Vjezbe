#include "vec3.h"
#include <math.h>

using namespace opp;
int Vec3::counter=0;
Vec3::Vec3(double a,double b,double c){
    x=a;
    y=b;
    z=c;
    ++counter;
}
Vec3::~Vec3(){
    --counter;

}
double Vec3::get_x(){
    return x;
}
double Vec3::get_y(){
    return y;
}
double Vec3::get_z(){
    return z;
}
Vec3 Vec3::operator + ( Vec3& a){
    Vec3 v;
    v.x=x+a.get_x();
    v.y=y+a.get_y();
    v.z=z+a.get_z();
    return v;
}
Vec3 Vec3::operator - ( Vec3& a){
    Vec3 v;
    v.x=x+a.get_x();
    v.y=y+a.get_y();
    v.z=z+a.get_z();
    return v;
}

Vec3 Vec3::operator = (Vec3& a){
    x=a.x;
    y=a.y;
    z=a.z;
}
void Vec3::operator *(int a){
    x=x*a;
    y=y*a;
    z=z*a;
}
void Vec3::operator /(int a){
    x=x/a;
    y=y/a;
    z=z/a;
}
void Vec3::operator +=(Vec3& a){
    x+=a.get_x();
    y+=a.get_y();
    z+=a.get_z();
}
void Vec3::operator -=(Vec3& a){
    x-=a.get_x();
    y-=a.get_y();
    z-=a.get_z();
}
void Vec3::operator *=(Vec3& a){
    x*=a.get_x();
    y*=a.get_y();
    z*=a.get_z();
}
void Vec3::operator /=(Vec3& a){
    x/=a.get_x();
    y/=a.get_y();
    z/=a.get_z();
}
double Vec3::operator *(Vec3& a){
    return x*a.get_x()+y*a.get_y()+z*a.get_z();

}
double Vec3::operator [](int a){
    if (a==0)
        return x;
    if (a==1)
        return y;
    if (a==2)
        return z;

}

void Vec3::normalizacija(){
    x=x/(sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
    y=y/(sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
    z=z/(sqrt(pow(x,2)+pow(y,2)+pow(z,2)));

}
void Vec3::print_counter(){
    cout<<counter<<endl;
}
bool Vec3:: operator ==(Vec3& a){
            return(x==a.x && y==a.y && z==a.z);
        }
bool Vec3:: operator <=(Vec3& a){
            return(x<=a.x && y<=a.y && z<=a.z);
        }
bool Vec3:: operator >=(Vec3& a){
            return(x>=a.x && y>=a.y && z>=a.z);
        }
bool Vec3:: operator >(Vec3& a){
            return(x>a.x && y>a.y && z>a.z);
        }
bool Vec3:: operator <(Vec3& a){
            return(x<a.x && y<a.y && z<a.z);
        }
bool Vec3:: operator !=(Vec3& a){
            return(x!=a.x || y!=a.y || z!=a.z);
        }
