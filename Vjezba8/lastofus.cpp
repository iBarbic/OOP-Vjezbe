#include "lastofus.h"

LastofUs::LastofUs()
{
    //ctor
}
string LastofUs::get_type(){
    return type;
}
vector<string> LastofUs::platforms(){
    return _platforms;
}

void LastofUs::ubaci(string s){
    _platforms.push_back(s);
}
string LastofUs::get_naziv(){
        return naziv;
}
void LastofUs::check(string line){
        if (line.find("PC") != std::string::npos)
                ubaci("PC");
        if (line.find("XBOX") != std::string::npos)
                ubaci("XBOX");
        if (line.find("PS4") != std::string::npos)
                ubaci("PS4");


}
