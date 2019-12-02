#ifndef FALLOUT4_H
#define FALLOUT4_H
#include "rpg.h"

class Fallout4 : public Rpg
{
    protected:
        vector <string> _platforms;
        string naziv;


    public:
        Fallout4();
        string get_type();
        vector<string> platforms();
        void ubaci(string s);
        string get_naziv();
        void check(string line);


};

#endif // FALLOUT4_H
