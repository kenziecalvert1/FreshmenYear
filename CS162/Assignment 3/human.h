/******************************************************
** Program: human.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:human header
** Input:nothing
** Output:nothing
******************************************************/
#ifndef HUMAN_H
#define HUMAN_H

#include"./creature.h"
class Human : public Creature{
    public:
        Human();



        int getDamage();



};
#endif
