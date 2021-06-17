/*********************************************************************
** Program Filename:charizard.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the charizard determines if they are captured or not
** Input:the traier goes to a pokestop and is randomized of which pokemon is there
** Output:determining if the charizard is caught by the trainer or not
*********************************************************************/
#include"./charizard.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Charizard::Charizard(){
    type="charizard";
    #ifdef DEBUG
    cout << "Charizard constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Charizard::operator=(const Charizard& temp){
      level=temp.level;
      type=temp.type;
}
