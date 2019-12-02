#include <iostream>
#include "zbroj.h"
using namespace std;

int main()
{
    Zbroj<int> zb;
    cout<<zb.zbroji(5,6)<<endl;
    Zbroj<char> jk;
    cout<<jk.zbroji('2','4')<<endl;
}
