/*********************************************************************
** Program Filename:onix.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class for onix child of rockpokemon
** Input:n/a
** Output:n/a
*********************************************************************/
#ifndef ONIX_H
#define ONIX_H
#include<cstdlib>
#include"./rockpokemon.h"
class Onix: public Rockpokemon{
    protected:

    public:
        Onix();
        void operator=(const Onix&);
        ~Onix(){int x=0;};
};
#endif
