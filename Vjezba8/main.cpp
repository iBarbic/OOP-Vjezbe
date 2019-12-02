#include <iostream>
#include <fstream>
#include "videogames.h"
#include "action.h"
#include"godofwar.h"
#include <sstream>
#include "whitcher3.h"
#include "darksouls.h"
#include "fallout4.h"
#include "lastofus.h"
#include "counter.h"


using namespace std;

int main()
{
    VideoGames* h[]={new Witcher3, new Darksouls,new Fallout4,new LastofUs,new GodofWar};
    Counter c;
    ifstream file("Games.txt");
    string line;

    while (getline(file, line)) {
            //cout<<line<<endl;
        string token = line.substr(0, line.find('#'));

        if(token=="GodOfWar"){
            h[4]->check(line);
        }
        if(token=="DarkSouls3"){
            h[1]->check(line);
        }
        if(token=="Fallout4"){
            h[2]->check(line);
        }
        if(token=="LastOfUs2"){
            h[3]->check(line);
        }
        if(token=="Witcher3"){
            h[0]->check(line);
        }

}
    for (int i = 0; i < 5; ++i)
        c.add(h[i]);
    cout<<c.najzastupljenija()<<endl;






}




    //

