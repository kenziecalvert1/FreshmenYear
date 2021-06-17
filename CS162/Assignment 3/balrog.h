/******************************************************
** Program:balrog.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:balrog header file
** Input: nothing
** Output:nothing
******************************************************/
#ifndef BALROG_H
#define BALROG_H
#include"./demon.h"
class Balrog : public Demon {
    public:
        Balrog();
		int getDamage();

};
#endif
