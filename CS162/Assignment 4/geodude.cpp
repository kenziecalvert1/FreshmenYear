/*********************************************************************
** Program Filename:geodude.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the geodude is determined of getting caught or not
** Input:the pokestop calls him
** Output:the trainer caught or didn't catch this pokemon
*********************************************************************/
#include"./geodude.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Geodude::Geodude(){
    type="geodude";
    #ifdef DEBUG
    cout << "geodude constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Geodude::operator=(const Geodude& temp){
      level=temp.level;
      type=temp.type;
}
