/*********************************************************************
** Program Filename:rockpokemon.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Descriptionthis is the child of pokemon
** Input:n/a
** Output:n/a
*********************************************************************/
#ifndef ROCKPOKEMON_H
#define ROCKPOKEMON_H
#include"./pokemon.h"
#include<cstdlib>
using namespace std;
class Rockpokemon: public Pokemon{
    protected:
    public:
        Rockpokemon();
        void operator=(const Rockpokemon&);
        ~Rockpokemon(){int x=0;}
        bool captured();

};
#endif
