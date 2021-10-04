#include "godofwar.h"

GodofWar::GodofWar()
{
    //ctor
}
string GodofWar::get_type(){
    return type;
}
vector<string> GodofWar::platforms(){
    return _platforms;
}

void GodofWar::ubaci(string s){
    _platforms.push_back(s);
}
string GodofWar::get_naziv(){
        return naziv;
}
void GodofWar::check(string line){
        if (line.find("PC") != std::string::npos)
                ubaci("PC");
        if (line.find("XBOX") != std::string::npos)
                ubaci("XBOX");
        if (line.find("PS4") != std::string::npos)
                ubaci("PS4");


}
