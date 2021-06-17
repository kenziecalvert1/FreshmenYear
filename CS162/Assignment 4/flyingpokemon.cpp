/*********************************************************************
** Program Filename:flyingpokemon.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the child class of flyingpokemon is defined
** Input:the pokestop calls a child class of flying pokemon and this is needed to see what it has
** Output:the user caught the pokemon
*********************************************************************/
#include"./flyingpokemon.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Flyingpokemon::Flyingpokemon(){
    type="flyingpokemon";
    #ifdef DEBUG
    cout << " flying constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
bool Flyingpokemon::captured(){
    if((rand() % 2)==1){
        return true;
    }
    return false;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Flyingpokemon::operator=(const Flyingpokemon& temp){
      level=temp.level;
      type=temp.type;
}
