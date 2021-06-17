/******************************************************
** Program:creature.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this is the creature base file that all the babies spawn from
** Input:nothing
** Output:nothing
******************************************************/
#include"./creature.h"

/*********************************************************************
** Function:creature constructor
** Description:has everything done
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Creature:: Creature(string newType, int newStrength, int newHit){
    type=newType;
    strength=newStrength;
    hitpoints=newHit;
    name="";
    payoff=0;
    cost=0;

}
/*********************************************************************
** Function:creature Default
** Description:default shit
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Creature:: Creature(){
    type="unkown";
    strength=0;
    hitpoints=0;
    name="";
    payoff=0;
    cost=0;
}
/*********************************************************************
** Function:overload operator
** Description:idk
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
Creature const& Creature::operator=(int const){
	return *this;
}
/*********************************************************************
** Function:take damage
** Description:checks to see if the creature has died
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
bool Creature:: takeDamage(int damage){

    hitpoints -= damage;
    cout<<name<<" the "<<type<<" has "<<hitpoints<<" hitpoints left"<<endl;
    if(hitpoints>0){
        return true;
    }else{
        cout<<name<<" the "<<type<<" has died:("<<endl;
        return false;
    }
}

/*********************************************************************
** Function:getDamage
** Description:checks to see how much damage the creature can take
** Parameters:none
** Pre-Conditions:the mother class is called
** Post-Conditions:none
*********************************************************************/
int Creature:: getDamage(){
    cout << "creature damage" << endl;
    return (rand() % strength)+1 ;
}
