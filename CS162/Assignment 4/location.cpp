/*********************************************************************
** Program Filename:location.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the location stuff is going on and giving the rest of the program
** Input:none the player is always having a location
** Output:the cordinates of where the trainer is at as well as the other events on the board
*********************************************************************/
#include"./location.h"
// void Location::action(Trainer &t){
//     cout<<"starting events"<<endl;
//     //e->startevent(t);
// }
Location::Location(){
    e=NULL;
    #ifdef DEBUG
    cout << "location constructor" << endl;
    #endif
}

Location::~Location(){
    delete e;
}
