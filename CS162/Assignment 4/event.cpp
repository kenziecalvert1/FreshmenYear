/*********************************************************************
** Program Filename:event.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the subclass for all the events
** Input:when a trainer goes on any spot this is called
** Output:determines what event is called
*********************************************************************/
#include"./event.h"
//Event const& Event::operator=(const Event& e){
//	type = e.type;
//}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Event::startevent(Trainer &t){
    cout<<"event start event"<<endl;
}
/*********************************************************************

** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Event::Event(){

    type=" ";
    #ifdef DEBUG
    cout << " event constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
string Event::get_type(){
    return type;
}
