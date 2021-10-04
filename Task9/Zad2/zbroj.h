#ifndef ZBROJ_H
#define ZBROJ_H
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
using namespace std;

template <typename T>
class Zbroj
{
    private:
        T rez;
    public:
        T zbroji(T a, T b){
            return a+b;
        }
        Zbroj(){
            cout<<"Obicna"<<endl;
        }
};

template<>
class Zbroj<char>
{
    private:
        char rez;

    public:
        Zbroj(){
            cout<<"Spec"<<endl;
        }
        char zbroji(char a, char b){
            if(isalpha(a)&& isalpha(b)){
                rez=(a-'0')+(b-'0');
                return rez;
            }
            rez=(a-'0')+(b-'0')+'0';
            return rez;
        }


};

#endif // ZBROJ_H
