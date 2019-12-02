#ifndef LASTOFUS_H
#define LASTOFUS_H
#include "action.h"

class LastofUs : public Action
{
    protected:
        vector <string> _platforms;
        string naziv;


    public:
        LastofUs();
        string get_type();
        vector<string> platforms();
        void ubaci(string s);
        string get_naziv();
        void check(string line);



};

#endif // LASTOFUS_H
