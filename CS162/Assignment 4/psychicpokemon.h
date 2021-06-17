/*********************************************************************
** Program Filename:psychicpokemon.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class for psychicpokemon's and this is a child of pokemon
** Input:field calls this
** Output:n/a
*********************************************************************/
#ifndef PSYCHICPOKEMON_H
#define PSYCHICPOKEMON_H
#include"./pokemon.h"
#include<cstdlib>

class Psychicpokemon : public Pokemon{
    protected:

    public:
        Psychicpokemon();
        void operator=(const Psychicpokemon&);
        ~Psychicpokemon(){int x=0;};
        bool captured();
};
#endif
