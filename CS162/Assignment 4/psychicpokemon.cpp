/*********************************************************************
** Program Filename:psychicpokemon.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description: this is the base class for psychicpokemons but a child of pokemon
** Input:the field calls this
** Output:n/a
*********************************************************************/
#include"./psychicpokemon.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Psychicpokemon::Psychicpokemon(){
    type="psychicpokemon";
    #ifdef DEBUG
    cout << "psychicpokemon  constructor" << endl;
    #endif

}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
bool Psychicpokemon::captured(){
    if((rand() % 4)==1){
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
void Psychicpokemon::operator=(const Psychicpokemon& temp){
      level=temp.level;
      type=temp.type;
}
