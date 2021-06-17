/*********************************************************************
** Program Filename:trainer.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class for trainer
** Input:n/a
** Output:n/a
*********************************************************************/
#ifndef TRAINER_H
#define TRAINER_H
#include<iostream>
#include"./pokemon.h"
#include"./geodude.h"
#include"./onix.h"
#include"./rayquaza.h"
#include"./mewtwo.h"
#include"./espeon.h"
#include"./charizard.h"


using namespace std;
class Trainer{
    private:
        int ball;
        int x;
        int y;
        int col;
        int row;
        Pokemon **captured;

    public:
        int get_ball_num();
        void set_ball_num(int);
        void get_captured_array(string);
        Trainer();
        Trainer(int,int);
        int get_x();
        int get_y();
        void set_x(int);
        void set_y(int);
        void move(int,int);
        ~Trainer();

};
#endif
