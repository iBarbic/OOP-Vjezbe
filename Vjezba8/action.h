#ifndef ACTION_H
#define ACTION_H
#include "videogames.h"

class Action : virtual public VideoGames
{
    protected:
        string type="Action";

    public:
        virtual vector<string> platforms(){};
        Action(){};
        string get_type();
        virtual void check(string line){};

};

#endif // ACTION_H
