#include <iostream>
#include "vec3.h"
using namespace std;
using namespace opp;
int main()
{
  Vec3 v(5,6,7);
  Vec3 k(1,1,1);
  //k=v;
  //double x=v*k;
  //cin>>v;
  //cout<<v==k<<endl;
  //v.normalizacija();
  //v.print_counter();
  if(v<k)
    cout<<"!!!!"<<endl;
  cout<<v;

}
