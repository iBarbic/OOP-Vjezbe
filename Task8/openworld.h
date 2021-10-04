#ifndef OPENWORLD_H
#define OPENWORLD_H
#include "videogames.h"

class OpenWorld : virtual public VideoGames
{
    protected:
        string type="OpenWorld";


    public:
        OpenWorld();
        string get_type();
        virtual void check(string line){};
        virtual vector<string> platforms(){};


};

#endif // OPENWORLD_H
