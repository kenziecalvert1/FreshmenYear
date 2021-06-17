/*********************************************************************
** Program Filename:field.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class for field
** Input:the trainer goes on a field spot
** Output:the trainer has caught a pokemon
*********************************************************************/
#ifndef FIELD_H
#define FIELD_H
#include"./onix.h"
#include"./geodude.h"
#include"./charizard.h"
#include"./rayquaza.h"
#include"./mewtwo.h"
#include"./espeon.h"
#include"./rockpokemon.h"
#include"./flyingpokemon.h"
#include"./psychicpokemon.h"
#include"./event.h"
#include<cstdlib>
#include<iostream>
using namespace std;
class Field: public Event{
    private:

        Pokemon *p;
    public:
        void startevent(Trainer &);
        void set_pokeballs(Trainer &);
        Field();
        ~Field(){int x=0;};
        void whos_captured();

};

#endif
