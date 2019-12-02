#include <iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;


int main()
{
    bool x=true;
    int N=2;
    string s;
    vector<string> v;
    for(int i=0;i<N;i++){
        cout<<"Unesite string"<<endl;
        cin>>s;
        string::iterator check;
        if(s.size()>20){
            while(s.size()>20){
                cout<<"Previse znakova"<<endl;
                cin>>s;
        }
        }

        for(check=s.begin();check!=s.end();check++) {
            if(isdigit(*check)){
                x=false;
            }
            if(isalpha(*check)&&*check>=97 && *check<=122)
            {
                *check=*check-32;
            }
        }

        v.push_back(s);
    }


    if(x){
        for(int i=0;i<N;i++){
            string::iterator it=v[i].begin();
            string::iterator kt=v[i].begin();
            int brojac=0;
            for(it=v[i].begin();it!=v[i].end();it++){

                while(*kt==*it){
                    brojac++;
                    it++;
                }
                if (brojac>1){
                    string c=to_string(brojac);
                    char p=c[0];
                    cout<<*kt<<endl;
                    v[i].insert(kt,p);
                    cout<<v[i]<<endl;
                        for(int j=0;j<brojac-1;j++){
                                cout<<"Prosa"<<endl;
                                v[i].erase(kt+1);
                    }
            }

                //cout<<v[i]<<endl;
                kt=it-(brojac-2);
                it=it-(brojac-1);
                brojac=0;
        }
        cout<<v[i]<<endl;
        }
    }


    else{
        for(int i=0;i<N;i++){
        string::iterator it=v[i].begin();
        string::iterator kt=v[i].begin();
        int brojac=0;
        for(it=v[i].begin();it!=v[i].end();it++){

            if(isdigit(*it)){
                brojac=*it-'0';
                kt=it;
                v[i].erase(kt);
                char c=*kt;
                cout<<c<<endl;

            for(int j=0;j<brojac-1;j++){
                v[i].insert(kt,c);
                cout<<"Prosa"<<endl;
            }
            }
            brojac=0;
            }

        cout<<v[i]<<endl;
        }
        }


}
