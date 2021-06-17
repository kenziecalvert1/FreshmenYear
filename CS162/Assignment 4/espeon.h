/*********************************************************************
** Program Filename:espeon.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the espeon class which is the child of rockpokemon and grandchild of pokemon
** Input:the pokestop will call this if chosen
** Output:if the espeon is captured or not
*********************************************************************/
#ifndef ESPEON_H
#define ESPEON_H
#include"./rockpokemon.h"
using namespace std;
#include<cstdlib>
class Espeon: public Rockpokemon{
    protected:

    public:

        Espeon();
        void operator=(const Espeon&);
        ~Espeon(){int x=0;};
};

#endif
