/*********************************************************************
** Program Filename:mewtwo.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the mewtwo class that is a child of the psychicpokemon
** Input:the field calls this
** Output:nithing
*********************************************************************/
#ifndef MEWTWO_H
#define MEWTWO_H
#include"./psychicpokemon.h"
#include<cstdlib>
class Mewtwo: public Psychicpokemon{
    protected:
    public:
        Mewtwo();
        void operator=(const Mewtwo&);
        ~Mewtwo(){int x=0;};

};
#endif
