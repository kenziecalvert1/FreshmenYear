/******************************************************
** Program: hobbit.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:hobbit header
** Input:
** Output:
******************************************************/
#ifndef HOBBIT_H
#define HOBBIT_H
#include"./human.h"

class Hobbit: public Human{
	public:
        Hobbit();
        Hobbit const& operator=(int const);
		int getDamage();

};
#endif
