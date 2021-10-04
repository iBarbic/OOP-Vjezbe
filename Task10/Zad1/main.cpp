#include <iostream>
#include <exception>
#include <fstream>
#include <ctime>
using namespace std;

 class XOperand : public exception{
    public:
        virtual const char* what() const throw(){
            return "Krivi operand";
        }
};
class XOperation : public exception{
    public:
        virtual const char* what() const throw(){
            return "Krivi operator";
        }

};
class XResult : public exception{
    public:
        virtual const char* what() const throw(){
            return "Dijeljenje s nulom";
        }
};
class Write_log{
    public:
       void writer(string msg){
        ofstream fout("errors.log", ios_base::out | ios_base::app);
		time_t rawtime;
        struct tm * timeinfo;
        char buffer[80];
        time (&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
        string str(buffer);
		fout<<str<<" ";
		fout << msg << endl;
        fout.close();
       }
};

class help{
    public:
        int cin_int(){
            int x;
            cout<<"Unesite int"<<endl;
            if(!(cin>>x))
                throw XOperand();
            else
                return x;
        }
        char operation(){
            char x;
            cout<<"Unesite operator"<<endl;
            cin>>x;
            if(x != '+' && x != '-' && x != '*' && x != '/')
                throw XOperation();
            return x;
        }
        void solve(int a, int b, char operand)
        {
            if (operand == '*')
                 cout << a * b << endl;
            else if(operand == '/') {
                if (b == 0)
                    throw XResult();
                else
                    cout<< a / b<<endl;
            }
            else if(operand == '+')
                cout<<a + b<<endl;
            else if (operand == '-')
                cout<<a - b<<endl;
        }
};

int main()
{
    help h;
    Write_log l;
    try{
        int a = h.cin_int();
        char c = h.operation();
        int b = h.cin_int();
        h.solve(a,b,c);
    }
    catch(exception& ex)
    {
        l.writer(ex.what());
        cout << ex.what() << endl;
    }

}
