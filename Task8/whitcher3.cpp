#include "whitcher3.h"

string  Witcher3::get_type(){
            return type;
        }
vector<string> Witcher3::platforms(){
    return _platforms;
}

void Witcher3::ubaci(string s){
    _platforms.push_back(s);
}
string Witcher3::get_naziv(){
        return naziv;
}
void Witcher3::check(string line){
        if (line.find("PC") != std::string::npos)
                ubaci("PC");
        if (line.find("XBOX") != std::string::npos)
                ubaci("XBOX");
        if (line.find("PS4") != std::string::npos)
                ubaci("PS4");


}
