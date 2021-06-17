/******************************************************
** Program: cyberdemon.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:cyberdemon header
** Input:does nothing
** Output:nothing
******************************************************/
#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include"./demon.h"

class Cyberdemon : public Demon{
	public:
        Cyberdemon();

		int getDamage();
        Cyberdemon const& operator=(int const);
};
#endif
