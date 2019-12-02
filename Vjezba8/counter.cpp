#include "counter.h"

Counter::Counter()
{
    pc=0;
    ps4=0;
    xbox=0;
}
void Counter::add(VideoGames* & v){
    vector <string> k=v->platforms();
    vector <string>::iterator it;
    for(it=k.begin();it!=k.end();++it){
        if(*it=="PC")
            pc+=1;
        if(*it=="PS4")
            ps4+=1;
        if(*it=="XBOX")
            xbox+=1;
    }

}
string Counter::najzastupljenija(){
        if(pc>ps4 && pc>xbox){
            return "PC";
        }
        if(pc<ps4 && ps4>xbox){
            return "PS4";
        }
         if(pc<xbox && ps4<xbox){
            return "XBOX";
        }

}
