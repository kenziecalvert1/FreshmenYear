/******************************************************
** Program: demon.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:demon header file
** Input:nothing
** Output:nothing
******************************************************/
#ifndef DEMON_H
#define DEMON_H
#include"./creature.h"

class Demon:public Creature{
    public:
        Demon();
        int getDamage();


};
#endif
