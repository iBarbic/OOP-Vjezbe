#ifndef RPG_H
#define RPG_H
#include "videogames.h"

class Rpg : virtual public VideoGames
{
    protected:
        string type="RPG";

    public:
        string get_type();
        virtual void check(string line){};
        virtual vector<string> platforms(){};


};

#endif // RPG_H
