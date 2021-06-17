/*********************************************************************
** Program Filename:location.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the location base class
** Input:this alwyas knows where everything is at
** Output:the cordinates
*********************************************************************/
#ifndef LOCATION_H
#define LOCATION_H
#include<iostream>
using namespace std;
#include"./event.h"
#include"./trainer.h"
class Location{
    protected:
        Event *e;

    public:
        //void action(Trainer &);
        //Location();
        //Location(Location &);
        Location();
        ~Location();
        Event* get_event(){return e; };
        //string get_event_type(){return e->get_type();};
        void set_event(Event* e){ this->e = e; };


};
#endif
