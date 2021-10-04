#include <iostream>
using namespace std;
int* odvaja(int* niz) {
	int parni = 0;
	int neparni = 0;
    int arr[10];
	for (int i = 0; i < 10; i++) {
		if (niz[i] % 2 == 0)
			parni += 1;

		else {
			neparni += 1;

		}
    arr[i] = niz[i];
	}
	int k = parni;
	int j = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			cout << "!!!!!!" << endl;;
			niz[parni - k] = arr[i];
			k--;

		}
		else{
			niz[parni + j] = arr[i];
			j++;


		}
	}

	return niz;
}


int main(){
	int *niz=new int[10];

	for (int i = 0; i < 10; i++) {
		cin >> niz[i];

	}
	niz = odvaja(niz);
	for (int i = 0; i < 10; i++) {
		cout << niz[i] << endl;

	}
    delete[] niz;
}

