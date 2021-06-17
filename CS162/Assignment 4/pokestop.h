/*********************************************************************
** Program Filename:pokestop.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class for pokestop which is a child of event
** Input:the location calls this if there is a pokestop in the location
** Output:the num of pokeballs
*********************************************************************/
#ifndef POKESTOP_H
#define POKESTOP_H
using namespace std;
#include"./event.h"
#include"./trainer.h"
#include<cstdlib>
class Pokestop: public Event{
    protected:

    public:
        void startevent(Trainer &);
        void get_balls(Trainer &);
        Pokestop();
        ~Pokestop(){int x=0;};
        //void percept(){};

};
#endif
