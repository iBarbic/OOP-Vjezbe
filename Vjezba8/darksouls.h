#ifndef DARKSOULS_H
#define DARKSOULS_H
#include "rpg.h"

class Darksouls : public Rpg
{
    protected:
        vector <string> _platforms;
        string naziv;


    public:
        Darksouls();
        string get_type();
        vector<string> platforms();
        void ubaci(string s);
        string get_naziv();
        void check(string line);



    private:
};

#endif // DARKSOULS_H
