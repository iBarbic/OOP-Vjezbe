#ifndef WHITCHER3_H
#define WHITCHER3_H
#include "rpg.h"
#include "openworld.h"

using namespace std;
class Witcher3 : public Rpg, public OpenWorld
{
    protected:
        vector <string> _platforms;
        string naziv;
        string type;

    public:
        Witcher3(){
            type="Rpg and OpenWorld";
        }
        string get_type();
        vector<string> platforms();
        void ubaci(string s);
        string get_naziv();
        void check(string line);


};

#endif // WHITCHER3_H
