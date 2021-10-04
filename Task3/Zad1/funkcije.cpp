#include <iostream>
#include "funkcije.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;
vector<int> unos(bool c, int a, int b, int n){
    vector<int> v(n);
    vector<int> :: iterator it;
    if (c==true){
            for(it=v.begin();it!=v.end();++it){
                *it=a+((rand())%(b-a+1));
            }
    }
    else{
        for(it=v.begin();it!=v.end();++it){
            cin>>*it;
        }

    }
    return v;

}

void printaj(vector<int> v){
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();++it){
            cout<<"Vektor je "<<*it<<endl;
        }

}
vector<int> nema(vector<int> v,vector<int> k){
    sort(v.begin(),v.end());
    sort(k.begin(),k.begin());
    vector<int> z;
    vector<int> :: iterator it;

    for(it=v.begin();it!=v.end();++it){
            if(!binary_search(k.begin(),k.end(),*it)){
                z.push_back(*it);

            }
}
    return z;
}
