/******************************************************
** Program: elf.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:elf header again is single no babies
** Input:nothing
** Output:nothing
******************************************************/
#ifndef ELF_H
#define ELF_H
#include"./creature.h"

class Elf : public Creature{
    public:
        Elf();

        int getDamage();
        Elf const& operator=(int const);


};
#endif
