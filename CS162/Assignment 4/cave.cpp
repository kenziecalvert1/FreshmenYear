/*********************************************************************
** Program Filename:
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the cave is defined
** Input:The user moves to activate the cave
** Output:the cave gives out gems that level up all pokemon
*********************************************************************/

#include"./cave.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Cave::Cave(){
    type="Cave";
    stone=0;
#ifdef DEBUG
cout << "Cave constructor" << endl;
#endif
}

/*********************************************************************
** Function:startevent
** Description:this starts the event for the cave
** Parameters:trainer array
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Cave::startevent(Trainer &t){
    cout<<"you found a mega stone all your pokemon will increase to the next level!"<<endl;
}
