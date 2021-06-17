/*********************************************************************
** Program Filename:rayquaza.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this sees if the pokemon is caught
** Input:the field calls this
** Output:true or false
*********************************************************************/
#include"./rayquaza.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Rayquaza::Rayquaza(){
    type="rayquaza";
    #ifdef DEBUG
    cout << "rayquaza  constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Rayquaza::operator=(const Rayquaza& temp){
      level=temp.level;
      type=temp.type;
}
