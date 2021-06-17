/*********************************************************************
** Program Filename:espeon.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the espeon determines if it is caught
** Input:the pokestop that calls this is the randomizer picks its number
** Output:if the espoen is captured or not
*********************************************************************/

#include"./espeon.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Espeon::Espeon(){
    type="espeon";
    #ifdef DEBUG
    cout << "Espeon constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Espeon::operator=(const Espeon& temp){
      level=temp.level;
      type=temp.type;
}
