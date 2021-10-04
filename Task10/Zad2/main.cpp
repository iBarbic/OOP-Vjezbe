#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Pomocna{

public:
    bool operator()(int a){
        return  a>100;
    }
};


bool sortiraj(const int& left,const int& right){
    if(left %2 && right % 2)
        return left < right;
    else if(left%2)
        return false;
    else if(right%2)
        return true;
    return left<right;


}

bool trazi_neparni (int i) {  // function:
  return i%2==1;
}


bool potencija(int a) {
    return ((a != 0) && (a &(a - 1)) == 0);
}
int main()
{
    vector<int> v;
    for(int i=0;i<100;i++){
        v.push_back(i);
    }
    vector <int>::iterator it;
    int _min=*min_element(v.begin(),v.end());
    int neparni=*find_if(v.begin(),v.end(),trazi_neparni);
    cout<<neparni<<endl;
    int broj_neparni=count_if(v.begin(),v.end(),trazi_neparni);
    //cout <<_min<<endl;
    cout<<broj_neparni<<endl;
    //v.erase(remove_if(v.begin(), v.end(), Pomocna()),v.end());
    //sort(v.begin(),v.end(),sortiraj);
    //replace_if (v.begin(), v.end(), potencija, 2);
    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }

}
