/*********************************************************************
** Program Filename:pokemon.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the baseclass for every pokemon
** Input:this is called technically when the field calls for a pokemon
** Output:n/a
*********************************************************************/
#include"./pokemon.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Pokemon::Pokemon(){
    level=0;
    type="pokeman";
    #ifdef DEBUG
    cout << "pokemon  constructor" << endl;
    #endif
}
//Pokemon::Pokemon(const Pokemon& temp){
// Pokemon::Pokemon(Pokemon &temp){
//     level=temp.get_level();
//     type=temp.get_type();
// }
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Pokemon::operator=(const Pokemon& temp){
      level=temp.level;
      type=temp.type;
}

/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
int Pokemon::get_level(){
    return level;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Pokemon::increase_level(){
    level++;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
string Pokemon::get_type(){
    return type;
}
