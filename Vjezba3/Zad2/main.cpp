#include <iostream>
#include "../Zad1/funkcije.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;



int main()
{
    vector<int> v;
    vector<int> k;
    vector<int> z;

    v=unos(false);
    k=unos(false);
    z=nema(v,k);
    printaj(z);


}
