#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack<int> s;
    /*for(int i=0;i<1000;i++){
        s.push(i);
    }
*/
    cout<<s.get_size()<<endl;
    int a=s.pop();
    cout<<a<<endl;
    cout<<s.get_size()<<endl;
    cout<<s.get_top()<<endl;

}
