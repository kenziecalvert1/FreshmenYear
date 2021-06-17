/******************************************************
** Program: balrog.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this is the balrog aka baby demon
** Input:nothing
** Output:nothing
******************************************************/
#include<iostream>
#include<string>
#include"./balrog.h"

using namespace std;
/*********************************************************************
** Function:default balrog
** Description:this is the baby of demon
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Balrog::Balrog():Demon(){
    type="Balrog";
    strength=10;
    hitpoints=20;
    name="";
    payoff=20;
    cost=20;
}
