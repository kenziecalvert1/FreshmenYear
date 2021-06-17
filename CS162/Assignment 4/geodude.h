/*********************************************************************
** Program Filename:geodude.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the child class of rockpokemon and grandchild of pokemon class
** Input:the pokestop calls this pokemon if the random generator picks this pokemon
** Output:the trainer has caught or not this pokemon
*********************************************************************/
#ifndef GEODUDE_H
#define GEODUDE_H
#include"./rockpokemon.h"
#include<cstdlib>
class Geodude: public Rockpokemon{
    protected:

    public:
        Geodude();
        void operator=(const Geodude&);
        ~Geodude(){int x=0;};
};

#endif
