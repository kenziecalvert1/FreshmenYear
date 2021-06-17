/*********************************************************************
** Program Filename:charizard.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the charizard class
** Input:the pokestop calls this if the randomizer lands on its number
** Output:if the charizard is cought or not
*********************************************************************/

#ifndef CHARIZARD_H
#define CHARIZARD_H
#include"./flyingpokemon.h"
#include<cstdlib>
using namespace std;
class Charizard: public Flyingpokemon{
    protected:

    public:
        Charizard();

        void operator=(const Charizard&);
        ~Charizard(){int x=0;};
};
#endif
