/*********************************************************************
** Program Filename:event.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the event class base class to all events
** Input:a trainer goes to any spot
** Output:the event is called
*********************************************************************/
#ifndef EVENT_H
#define EVENT_H
#include<string>
using namespace std;
#include"./trainer.h"
class Event{
    protected:
        string type;
    public:
        virtual void startevent(Trainer &);
        //Event const& operator=(const Event&);
        Event();
        ~Event(){int x=0;};
        string get_type();
        //virtual void percept()=0;
        char get_c(){return (char) type.at(0);};

};
#endif
