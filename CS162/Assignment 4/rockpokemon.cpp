/*********************************************************************
** Program Filename:rockpokemon.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the mother of all the rockpokemon
** Input:the field calls this
** Output:n/a
*********************************************************************/
#include"./rockpokemon.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Rockpokemon::Rockpokemon(){
    type="rockpokemon";
    #ifdef DEBUG
    cout << "rockpokemon  constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
bool Rockpokemon::captured(){
    if((rand () % 2)==1){
        return true;
    }else{
        return false;
    }
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Rockpokemon::operator=(const Rockpokemon& temp){
      level=temp.level;
      type=temp.type;
}
