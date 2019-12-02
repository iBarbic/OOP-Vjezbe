#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

void ispravak(string s){


    string:: iterator it;
    int brojac=0;

    for (it=s.begin();it!=s.end();it++){
        if(*it==',' || *it=='.')
            s.insert(it+1,' ');
        if((*it==',' || *it=='.')&& *(it-1)==' ')
            s.erase(it-1);


    }


    cout<<s<<endl;












}

int main()
{
    string s;

    getline(cin,s);
    //cout<<s<<endl;
    ispravak(s);

    //cout<<s<<endl;
}
