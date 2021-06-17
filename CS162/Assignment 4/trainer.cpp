/*********************************************************************
** Program Filename:trainer.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is where the trainer gets all its functions
** Input:int from the user
** Output:a piece of the game
*********************************************************************/
#include"./trainer.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
int Trainer::get_x(){
    return x;
}
int Trainer::get_y(){
    return y;
}
void Trainer::set_x(int x){
    this->x=x;

}
void Trainer::set_y(int y){
    this->y=y;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
int Trainer::get_ball_num(){
    return ball;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Trainer::set_ball_num(int balls){
    ball=balls;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Trainer::move(int row,int col){

    int move;
    cout<<"Which way would you like to go: "<<endl;
    cout<<"Up-1"<<endl;
    cout<<"Down-2"<<endl;
    cout<<"Left-3"<<endl;
    cout<<"Right-4"<<endl;
    cin>>move;
    switch(move){
        case 1:
            if((x-1)<0){cout<<"cant move that way"<<endl;}
            else{ x--;}
            break;
        case 2:
            if((x+1)>row){cout<<"cant move that way"<<endl;}
            else{x++;}
            break;
        case 3:
            if((y-1)<0){cout<<"cant move that way"<<endl;}
            else{y--;}
            break;
        case 4:
            if((y+1)>col){cout<<"cant move"<<endl;}
            else{y++;}
            break;
        default:
            cout<<"Please use 1,2,3,4 to move"<<endl;
            break;
    }
}

/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Trainer::get_captured_array(string get_type){
    if(get_type=="geodude"){
        captured[0]->increase_level();
        cout<<"Geodude is at level "<<captured[0]->get_level()<<endl;
    }else if(get_type=="mewtwo"){
        captured[1]->increase_level();
        cout<<"Mewtwo is at level "<<captured[1]->get_level()<<endl;
    }else if(get_type=="onix"){
        captured[2]->increase_level();
        cout<<"Onix is at level "<<captured[2]->get_level()<<endl;
    }else if(get_type=="charizard"){
        captured[3]->increase_level();
        cout<<"Charizard is at level "<<captured[3]->get_level()<<endl;
    }else if(get_type=="espeon"){
        captured[4]->increase_level();
        cout<<"Espeon is at level "<<captured[4]->get_level()<<endl;
    }else if(get_type=="rayquaza"){
        captured[5]->increase_level();
        cout<<"Rayquaza is at level "<<captured[5]->get_level()<<endl;
    }
}

/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Trainer::Trainer(){
    x=0;
    y=0;
    ball=0;
    captured=new Pokemon *[6];
    captured[0]=new Geodude;
    captured[1]=new Mewtwo;
    captured[2]=new Onix;
    captured[3]=new Charizard;
    captured[4]=new Espeon;
    captured[5]=new Rayquaza;
    #ifdef DEBUG
    cout << "trainer  constructor" << endl;
    #endif
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Trainer::Trainer(int row,int col){
    x=0;
    y=0;
    this->row=row;
    this->col=col;
}
Trainer::~Trainer(){
    for(int i=0;i<6;i++){
        delete captured[i];
    }
    delete [] captured;
}
