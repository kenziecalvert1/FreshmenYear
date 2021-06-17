/******************************************************
** Program: human.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this controls the human and her babies
** Input:nothing
** Output:nothing
******************************************************/
#include<iostream>
#include<string>
#include"./human.h"
using namespace std;
/*********************************************************************
** Function:human constructor
** Description:all the human info
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Human:: Human(){
    type="human";
    strength=3;
    hitpoints=10;
    payoff=20;
    cost=1;
}
