#include <iostream>
#include <algorithm>
using namespace std;

int* pronadi(int* niz) {
	int brojac[] = { 0,0,0,0,0,0,0,0,0 };
	int broj=0;

    for (int i = 0; i < 10; i++) {
		brojac[niz[i] - 1] += 1;
	}
    for (int j = 0; j < 9; j++) {
		if (brojac[j] == 0) {
			broj = j + 1;
		}

    }
	for (int k = 0; k < 11; k++) {
		if (k == 10) {
            niz[k] = broj;

		}

	}

	sort(niz, niz + 11);
	return niz;


}

int main(){

	int *niz=new int[11];

	int broj;
	for (int i = 0; i < 10; i++) {
		cout << "Unesite broj od 1-9" << endl;
		cin >> broj;
		while (broj > 9 || broj < 1) {
			cout << "Krivi broj" << endl;
			cin >> broj;
		}
        niz[i] = broj;
    }
    niz = pronadi(niz);

	for (int i = 0; i < 11; i++) {
		cout << "Niz je" << niz[i] << endl;
	}

	delete[] niz;


}
