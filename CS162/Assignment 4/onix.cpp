/*********************************************************************
** Program Filename:onix.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:determines if the onix is captured or not
** Input:the field calls this
** Output:true or false
*********************************************************************/
#include"./onix.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Onix::Onix(){
    type="onix";
    #ifdef DEBUG
    cout << "onix  constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Onix::operator=(const Onix& temp){
      level=temp.level;
      type=temp.type;
}
