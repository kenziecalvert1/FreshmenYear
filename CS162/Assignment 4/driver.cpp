/*********************************************************************
** Program Filename:driver.cpp
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the driver
** Input:This starts the game and checks if the user has enough command line arguements
** Output:will run the program if there is enough info
*********************************************************************/

#include<iostream>
#include"./world.h"
#include<stdlib.h>
using namespace std;
/*********************************************************************
** Function:main
** Description:this is the stuff that the cave goes off of
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
int main(int argc, char *argv[]){
    int again;
    srand(time(NULL));
    World *w;
    if(argc<3 || argc > 4){
        cout<<"You don't have enough arguements!"<<endl;
        return -1;
    }
    int row=atoi(argv[1]);
    int col=atoi(argv[2]);
    if(!(col>=3 && col<=10)){
        cout<<"first number wasn't enough"<<endl;
    }
    if(!(row>=3 && row<=10)){
        cout<<"second number wasn't between 3 and 10"<<endl;
    }
    #ifdef DEBUG
    cout << "Using Debug mode" << endl;
    #endif
    //if(*argv[3]!='d' || *argv[3]!='t'){
    //    cout<<"you did use a correct board char T for trainer or D for demo"<<endl;
    //}
    do{
        w->start_program();
        w=new World(row,col);
        if(argc == 4 && *argv[3]=='d'){
            w->testing_board(row,col);
            w->play_debug_game();
        }else{
            w->trainer_board(row,col);
            w->play_game();
        }
        cout<<"Do you want to play again yes-1 or no-2: ";
        cin>>again;
    } while(again!=2);
    delete w;
    return 0;
}
