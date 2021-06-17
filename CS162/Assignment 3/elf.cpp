/******************************************************
** Program:elf.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this controls elf and he is single and has no babies
** Input:nothing
** Output:nothing
******************************************************/
#include<iostream>
#include<string>
#include"./elf.h"
using namespace std;
/*********************************************************************
** Function:elf constructor
** Description:all the elf info
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Elf::Elf(): Creature(){
    type="elf";
    strength=8;
    hitpoints=15;
    name="";
    payoff=10;
    cost=10;
}
/*********************************************************************
** Function:elf overload operator
** Description:idk
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Elf const& Elf::operator=(int const){
	return *this;
}
