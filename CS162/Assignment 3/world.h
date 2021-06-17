#include"./elf.h"
#include"./human.h"
#include"./hobbit.h"
#include"./demon.h"
#include"./cyberdemon.h"
#include"./balrog.h"
#include"./creature.h"
#include<iostream>
using namespace std;

class World{
    private:
        Creature **c;
        int numCreature;
        int balance;
    public:
        void shop();
        void view_catalog();
        int bank_account();
        void main();
        void fight_mode();
        World();
        void empty();
        ~World();
        void buying();
        void remove_creature(int);
        void default_world();
        void make_ur_own();
        void display_creatures();

};
