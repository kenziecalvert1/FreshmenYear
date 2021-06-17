/******************************************************
** Program: demon.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this names the demon work and all her babies
** Input:nothing
** Output:nothing
******************************************************/
#include<iostream>
#include<string>
#include"./demon.h"
using namespace std;
/*********************************************************************
** Function:demon constructor
** Description:demon info
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Demon::Demon():Creature(){
    type="demon";
    strength=8;
    hitpoints=10;
    name="";
    payoff=10;
    cost=10;
}
/*********************************************************************
** Function:getDamage
** Description:calculates the damage for demon when fighting
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
int Demon:: getDamage(){
    cout << "Demon Damage" << endl;
}
