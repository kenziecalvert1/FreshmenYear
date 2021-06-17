#ifndef WORLD_H
#define WORLD_H
#include<iostream>
#include<cstdlib>
using namespace std;
#include"./location.h"
#include"./trainer.h"
#include"./cave.h"
#include"./pokestop.h"
#include"./pokemon.h"
#include"./field.h"
/*********************************************************************
** Program Filename:world.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the class for the world
** Input:n/a
** Output:n/a
*********************************************************************/
#include<string.h>
class World{
    private:
        int row;
        int col;
        Location **l;
        Trainer *t;

    public:
        void start_program();
        void testing_board(int,int);

        void trainer_board(int,int);
        void play_game();
        void play_debug_game();
        void populate_board();
        char get_letter_location(int,int);
        void generate_grid();
        World();
        World(int,int);
        ~World();

};
#endif
