/*********************************************************************
** Program Filename:world.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the thing that contrls the game after the command line arguments have been checked
** Input:int
** Output:the game
*********************************************************************/
#include"./world.h"
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void World::start_program(){
    cout<<"Welcome to Pokemon! You need to find all pokemon and evolve them to level 2 from basecase"<<endl;
    cout<<"You won't be able to see the pokemon but you will be given messages guiding you"<<endl;
    cout<<"You have pokestops and caves as well"<<endl;
    cout<<"After finding all the pokemon you have to bring them to the professor which is where you start the game!"<<endl;
    cout<<"Have fun!"<<endl;
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void World::populate_board(){
    int choice;
    Event *e;
//    cout<<row<<" "<<col<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            choice=rand() % 3;
            switch(choice){
                case 0:
                    //cout<<"case 0"<<endl;
                    e= new Cave;
                    //e->get_type();
                    l[i][j].set_event(e);
                //    cout<<l[i][j].get_event()->get_type()<<endl;
                    break;
                case 1:
                    //cout<<"case 1"<<endl;
                    e= new Pokestop;
                    l[i][j].set_event(e);
                //    cout<<l[i][j].get_event()->get_type()<<endl;
                    break;
                case 2:
                    //cout<<"case 2"<<endl;
                    e = new Field;
                    l[i][j].set_event(e);
                //    cout<<l[i][j].get_event()->get_type()<<endl;
                    break;
                default:
                    break;
            }
        }
    }
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
World::World(int row,int col){
    this->row=row;
    this->col=col;
    l=new Location *[row];
    for(int i=0;i<row;i++){
        l[i]=new Location [col];
    }
    t=new Trainer(0,0);
    populate_board();
    #ifdef DEBUG
    cout << "World constructor" << endl;
    #endif

}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void World::play_debug_game(){
    int x=0;
    while(x!=10){
        t->move(row,col);
        testing_board(row,col);//print board
        l[t->get_x()][t->get_y()].get_event()->startevent(*t);
        cout<<"line 62"<<endl;
        x++;
    }

}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void World::play_game(){
    t->move(row,col);
    #ifdef DEBUG
    testing_board(row,col);//print board
    #endif
    trainer_board(row,col);
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void World::testing_board(int row, int col){

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            //cout<<"word 58"<<endl;
            cout<<get_letter_location(i-1,j-1);
            // if(i!=row){
            //     cout<<"_";
            // }else{
            //     cout<<" ";
            // }
            if(j!=col){
                cout<<"|";
            }
        }
        cout<<endl;
    }
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void World::trainer_board(int row, int col){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){

            //cout<<get_letter_location(i-1,j-1);
             if(i!=row){
                cout<<"_";
             }else{
                 cout<<" ";
             }
            if(j!=col){
                cout<<"|";
            }
        }
        cout<<endl;
    }
}
/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
char World::get_letter_location(int row,int col){
    if(row==t->get_x() && col==t->get_y()){
        return 'T';
    }
    if(strcmp("Field",l[row][col].get_event()->get_type().c_str())==0){

        return 'F';
    }
    if(strcmp("Pokestop",l[row][col].get_event()->get_type().c_str())==0){
    //cout<<"word 79"<<endl;
        return 'S';
    }
    if(strcmp("Cave",l[row][col].get_event()->get_type().c_str())==0){
    //cout<<"word 83"<<endl;
            return 'C';
    }


}

/*********************************************************************
** Function:cave defualt constructor
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
World::World(){

    l=NULL;
    t=NULL;
    row=0;
    col=0;
    #ifdef DEBUG
    cout << "world  constructor" << endl;
    #endif
}
World::~World(){
    for(int i=0;i<row;i++){
            delete l[i];
    }
    delete [] l;
    delete t;
}
