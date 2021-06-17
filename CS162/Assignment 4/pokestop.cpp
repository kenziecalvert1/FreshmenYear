/*********************************************************************
** Program Filename:pokestop.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the trainer gets its pokeballs
** Input:the location calls this
** Output:an int of ppokeballs
*********************************************************************/
#include"./pokestop.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Pokestop::Pokestop(){
    type="Pokestop";
    #ifdef DEBUG
    cout << "pokestop  constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Pokestop::startevent(Trainer &t){
    cout<<"line 6"<<endl;
    get_balls(t);
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
//takes in the number of pokeballs the trainer has and adds a random number between 3-10 to the number they previously had
void Pokestop::get_balls(Trainer &t){
    int balls=t.get_ball_num();
    int pokeball;
    pokeball=((rand() % 8)+3);
    balls+=pokeball;
    t.set_ball_num(balls);
    cout<<"You now have "<<balls<<" pokeballs!"<<endl;
}
