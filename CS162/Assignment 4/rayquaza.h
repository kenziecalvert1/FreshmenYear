/*********************************************************************
** Program Filename:rayquaza.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class
** Input:the field calls this
** Output:true or false
*********************************************************************/
#ifndef RAYQUAZA_H
#define RAYQUAZA_H
#include"./flyingpokemon.h"
#include<cstdlib>
class Rayquaza: public Flyingpokemon{
    protected:

    public:
    void operator=(const Rayquaza&);
        Rayquaza();
        ~Rayquaza(){int x=0;};
};
#endif
