/******************************************************
** Program: cyberdemon.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:cyberdemon shit it just controls it
** Input:nothing
** Output:nothing
******************************************************/
#include<iostream>
#include<string>
#include"./cyberdemon.h"
using namespace std;
/*********************************************************************
** Function:cyberdemon defalt constructor
** Description:says all the info of cyberdemon
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Cyberdemon::Cyberdemon(): Demon(){
    type="Cyberdemon";
    strength=8;
    hitpoints=15;
    name="";
    payoff=15;
    cost=15;
}
/*********************************************************************
** Function:getDamage
** Description:gets damage for cyberdemon
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
int Cyberdemon:: getDamage(){
    int damage = (rand() % strength) +1;
    cout << name << " the " << type << "attacks for " << damage << "damage!" << endl;
    return damage;
}
/*********************************************************************
** Function:overload operator
** Description:idk
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Cyberdemon const& Cyberdemon::operator=(int const){
	return *this;
}
