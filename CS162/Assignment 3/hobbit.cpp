/******************************************************
** Program: hobbit.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this controls hobbit which is a child of human
** Input:nothing
** Output:nothing
******************************************************/
#include<iostream>
#include<cstdlib>

#include"./hobbit.h"
using namespace std;
/*********************************************************************
** Function:hobbit constructor
** Description:all the hobbit info
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Hobbit:: Hobbit() : Human(){
    type="Hobbit";
    strength=5;
    hitpoints=10;
    payoff=5;
    cost=5;
}
/*********************************************************************
** Function:hobbit overoad operator
** Description:idk
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Hobbit const& Hobbit::operator=(int const){
	return *this;
}
