#ifndef GODOFWAR_H
#define GODOFWAR_H
#include "action.h"

class GodofWar : public Action
{
    protected:
        vector <string> _platforms;
        string naziv;


    public:
        GodofWar();
        string get_type();
        vector<string> platforms();
        void ubaci(string s);
        string get_naziv();
        void check(string line);


};

#endif // GODOFWAR_H
