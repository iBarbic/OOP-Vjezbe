#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
using namespace std;

template < typename T >

class Stack
{
    private:
        const int _defaultSize=10;
        const int _maxSize=1000;
        int _size;
        T _top;
        T* stackPtr;
        vector<T> v;

    public:
        Stack(int s=10){
            _size=s;
            stackPtr=nullptr;
            v.reserve(_defaultSize);
        }
        ~Stack(){};
        void push(T a){
            if(check() && get_size()!=_maxSize){
                v.push_back(a);
                stackPtr=&v.back();
            }
            else
                cout<<"Stack je pun"<<endl;
        }
        T pop(){
            if(!check()|| (check()&& get_size()!=0)){
                T a=v.back();
                v.pop_back();
                stackPtr=&v.back();
                return a;
            }
           else{
                stackPtr=nullptr;

           }


        }
        bool check(){
            if(v.size()==0){
                cout<<"Stack je prazan"<<endl;
                return true;
            }
            if(v.size()==_maxSize){
                cout<<"Stack je pun"<<endl;
                return false;
            }
            return true;
        }
        int get_size(){
            _size=v.size();
            return _size;
        }
        T get_top(){
            if(!check()){
                _top=v.back();
                return _top;
            }
        }



};

#endif // STACK_H
