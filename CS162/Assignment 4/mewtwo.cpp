/*********************************************************************
** Program Filename:mewtwo.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:controls when the mewtwo gets captured or not
** Input:the field calls this
** Output:the pokemon is captured or not
*********************************************************************/
#include "mewtwo.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Mewtwo::Mewtwo(){
    type="mewtwo";
    #ifdef DEBUG
    cout << " mewtwo constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Mewtwo::operator=(const Mewtwo& temp){
      level=temp.level;
      type=temp.type;
}
