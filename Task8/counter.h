#ifndef COUNTER_H
#define COUNTER_H
#include "videogames.h"

class Counter
{
    private:
        int pc;
        int ps4;
        int xbox;


    public:
        Counter();
        void add(VideoGames* & v);
        string najzastupljenija();


};

#endif // COUNTER_H
