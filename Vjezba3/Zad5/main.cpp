#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef struct Producent{
    string name;
    string movie;
    int year;


};
bool mycompare(const Producent &a, const Producent &b)
{
    return a.name < b.name;
}
void najzastupljeniji(vector<Producent> v){
    int brojac=1;
    int indeks=0;
    int max_brojac=0;
    int j=0;
    vector<Producent> z;
    string name=v[0].name;
    for(int i=0;i<5;i++){
            string tempname=v[i].name;
            while(v[i].name==tempname){
                i++;
                brojac++;


            }
        if(brojac==max_brojac){
            z.push_back(Producent());
            z[j].name=v[i-1].name;
            j++;

        }
        if(brojac>max_brojac){
            j=0;
            z.push_back(Producent());
            z[j].name=v[i-1].name;
            max_brojac=brojac;
            //indeks=i-1;
            j++;


        }
        i--;
        brojac=1;




    }

    for (int k=0;k<j+1;k++){

    cout<<z[k].name<<endl;
   }



}









int main()
{
    vector<Producent> v;


   for (int i=0;i<5;i++){
        v.push_back(Producent());
        cout<<"Unesite ime"<<endl;
        cin>>v[i].name;
        cout<<"Unesite film"<<endl;
        cin>>v[i].movie;
        cout<<"Unesite godinu"<<endl;
        cin>>v[i].year;
   }
   sort(v.begin(),v.end(),mycompare);

   for (int i=0;i<5;i++){
    cout<<v[i].name<<" "<<v[i].movie<<" "<<v[i].year<<endl;
   }
   najzastupljeniji(v);




}
