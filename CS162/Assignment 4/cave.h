/*********************************************************************
** Program Filename:cave.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the cave class is defined
** Input:the user goes to a cave spot that activates it
** Output:the user gets gems that level up all the pokemon
*********************************************************************/

#ifndef CAVE_H
#define CAVE_H
#include<cstdlib>
#include"./event.h"
using namespace std;
#include<iostream>

class Cave: public Event{
    private:
        int stone;
    public:
        void startevent(Trainer &);
        //int get_stone();
        Cave();
        //void percept(){};
        ~Cave(){int x =0;};
        //void startevent(Trainer &);

};
#endif
