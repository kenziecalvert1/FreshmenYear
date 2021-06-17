/******************************************************
** Program:driver.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this is what the user sees first
** Input:int
** Output:string
******************************************************/
#include<iostream>
#include<string>
#include<cstdlib>
#include"./world.h"
using namespace std;
/*********************************************************************
** Function:main
** Description:is the start of the program
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:the rest of the program runs
*********************************************************************/
int main(){
    srand(time(NULL));
    World W;
    int world;
    cout<<"Welcome to dream world! Would you like to make your own world(2) or use the one I created for you(2): ";
    cin>>world;
    if(world==1){
        cout<<"you're in"<<endl;
        //W.make_ur_own();
    }else if(world==2){
        W.default_world();
        W.main();
    }else{
        cout<<"Please enter correct input!"<<endl;
    }
    return 0;
}
