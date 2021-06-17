/*********************************************************************
** Program Filename:field.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the trianer goes to catch a pokemon
** Input:the trainer goes to a field spot
** Output: the trainer might catch a pokemon
*********************************************************************/
#include"./field.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Field::Field(){
    type="Field";
    #ifdef DEBUG
    cout << " field constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Field::whos_captured(){

    int random;
    random=rand() %6;
    switch(random) {
        case 1:
             p=new Charizard();
             break;
         case 2:
             p=new Espeon();
             break;
         case 3:
             p=new Geodude();
             break;
         case 4:
             p=new Mewtwo();
             break;
         case 5:
             p=new Onix();
             break;
         default:
             p=new Rayquaza();
             break;
     };
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Field::set_pokeballs(Trainer &t){
    int balls=t.get_ball_num();
    balls--;
    t.set_ball_num(balls);
    cout<<"You now have "<<balls<<" pokeballs!"<<endl;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Field::startevent(Trainer &t){
    whos_captured();
    int capture;
    cout<<"A wild "<<p->get_type()<<" has appreared!"<<endl;
    cout<<"would you like to capture "<<p->get_type()<<" yes-1 or no-2: ";
    cin>>capture;
    if(capture ==1){
         if(t.get_ball_num()>0){
            if(p->captured()==true){
                cout<<"You captured the pokemon!"<<endl;
                set_pokeballs(t);//this decreases the pokeballs by one
                //add the pokemon to the array
                t.get_captured_array(p->get_type());
            }else{
                cout<<"Sorry that pokemon was not captured"<<endl;
            }
        }else{
            cout<<"you don't have the balls todo this...HAHA"<<endl;
        }
    }
}
