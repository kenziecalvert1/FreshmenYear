/*********************************************************************
** Program Filename:flyingpokemon.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the child class of pokemon is defined
** Input:the pokestop calls this
** Output:the trainer caught the pokemon
*********************************************************************/
#ifndef FLYINGPOKEMON_H
#define FLYINGPOKEMON_H
#include"./pokemon.h"
#include<cstdlib>
class Flyingpokemon: public Pokemon{
    protected:

    public:
        bool captured();
        Flyingpokemon();
        void operator=(const Flyingpokemon&);
        ~Flyingpokemon(){int x=0;};
};
#endif
