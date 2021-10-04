#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class VideoGames
{
    public:
        virtual string get_type() = 0;
        virtual ~VideoGames() = 0;
        virtual vector<string> platforms() =0;
        virtual void check(string line) = 0;


};

#endif // VIDEOGAMES_H
