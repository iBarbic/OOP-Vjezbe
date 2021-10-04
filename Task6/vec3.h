#ifndef VEC3_H
#define VEC3_H
#include<iostream>
using namespace std;
namespace opp{
class Vec3
{
    private:
        double x;
        double y;
        double z;
        static int counter;
    public:
        Vec3(double a=5,double b=5,double c=5);
        ~Vec3();
        static void print_counter();
        Vec3 operator +(Vec3& a);
        Vec3 operator -(Vec3& a);
        Vec3 operator =(Vec3& a);
        void operator *(int a);
        void operator /(int a);
        void operator +=(Vec3& a);
        void operator -=(Vec3& a);
        void operator *=(Vec3& a);
        void operator /=(Vec3& a);
        double operator *(Vec3& a);
        double operator [](int a);
        bool operator ==(Vec3& a);
        bool operator >=(Vec3& a);
        bool operator <=(Vec3& a);
        bool operator >(Vec3& a);
        bool operator <(Vec3& a);
        bool operator !=(Vec3& a);


        void normalizacija();
        friend istream& operator>>(istream& is,Vec3& v){
            is>>v.x>>v.y>>v.z;
            return is;
        }
        friend ostream& operator <<(ostream& os,Vec3& v){
            os<<v.x<<" "<<v.y<<" "<<v.z;
            return os;
        }
        double get_x();
        double get_y();
        double get_z();
};




}
#endif // VEC3_H
