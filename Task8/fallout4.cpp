#include "fallout4.h"

Fallout4::Fallout4()
{
    //ctor
}
string Fallout4::get_type(){
    return type;
}
vector<string> Fallout4::platforms(){
    return _platforms;
}

void Fallout4::ubaci(string s){
    _platforms.push_back(s);
}
string Fallout4::get_naziv(){
        return naziv;
}
void Fallout4::check(string line){
        if (line.find("PC") != std::string::npos)
                ubaci("PC");
        if (line.find("XBOX") != std::string::npos)
                ubaci("XBOX");
        if (line.find("PS4") != std::string::npos)
                ubaci("PS4");


}
