#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct Vektor  {
	int size_f;
	int size_l;
	int *niz;




void new_vektor(int n) {
    size_f = n;
    size_l = 0;
	niz = new int[size_f];



}

void delete_vektor() {
	size_l=0;
	size_f=0;
	delete[] niz;
}


void vektor_resize(){
    size_f*=2;

	int arr[1000];
    for (int i=0;i<size_l;i++){
        arr[i]=niz[i];
    }
    cout<<"!!!!!"<<endl;
    delete[] niz;
    niz=new int[size_f];
    for (int i=0;i<size_l;i++){
        niz[i]=arr[i];
    }
}


void vektor_push_back(int a) {
    if(size_l==size_f){
        vektor_resize();
    }
    niz[size_l] = a;
    size_l=size_l+1;
}
void vektor_pop_back() {
	niz[size_l-1] = NULL;
	size_l -= 1;

}
int vektor_front() {
	return niz[0];

}
int vektor_back() {
	return niz[size_l - 1];
}
int vektor_size() {
	return size_l;
}

}Vektor;





int main() {
	Vektor v;
	int n = 5;
	int broj;
	v.new_vektor(n);
	for (int i = 0; i < 6; i++) {
        cin >> broj;
		v.vektor_push_back(broj);
    }
    for(int i=0;i<v.size_l;i++){
        cout<<"vektor je"<<v.niz[i]<<endl;
    }
    cout<<v.vektor_size()<<endl;
    //v.delete_vektor();
	cout << v.size_f << endl;
	//cout<<v.vektor_size(v)<<endl;
}
