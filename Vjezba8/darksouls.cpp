#include "darksouls.h"

Darksouls::Darksouls()
{
    //ctor
}
string Darksouls::get_type(){
    return type;
}
vector<string> Darksouls::platforms(){
    return _platforms;
}

void Darksouls::ubaci(string s){
    _platforms.push_back(s);
}
string Darksouls::get_naziv(){
        return naziv;
}
void Darksouls::check(string line){
        if (line.find("PC") != std::string::npos)
                ubaci("PC");
        if (line.find("XBOX") != std::string::npos)
                ubaci("XBOX");
        if (line.find("PS4") != std::string::npos)
                ubaci("PS4");


}
