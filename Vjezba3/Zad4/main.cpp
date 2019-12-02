#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main()
{
    vector<int> v(22,1);
    vector<int>:: iterator it;
    int i=0;
    int potez=0;
    int skida=0;
    for(it=v.begin();it !=v.end();++it){
        *it=i;
        i++;


    }
    it=v.end()-1;
    while(*it!=0){
            if(potez==0 && *it!=0){
                if (*it<3){

                    int random_broj=1;
                    cout<<"Preostalo sibica "<<*it<<endl;
                    cout<<"Racunalo skida "<<random_broj<<endl;
                    it=it-random_broj;
                    potez=1;
                }
                else{
                    int random_broj = (rand() % 3) + 1;
                    cout<<"Preostalo sibica "<<*it<<endl;
                    cout<<"Racunalo skida "<<random_broj<<endl;
                    it=it-random_broj;
                    potez=1;


                }

            }
            if(potez==1 && *it!=0){
                cout<<"Preostalo sibica "<<*it<<endl<<"Koliko skidate"<<endl;
                cin>>skida;
                while((skida>3) || (skida<0)||(skida>*it)){

                    cout<<"Pogreska upisite ponovno"<<endl;
                    cin>>skida;
                }




                it=it-skida;
                potez=0;

            }
            skida=0;



    }
    cout<<"!!!!!"<<potez<<endl;
    if(potez==0){
        cout<<"Pobjednik racunalo"<<endl;
    }
    else{
       cout<<"Pobjednik igrac"<<endl;
    }




}
