/******************************************************
** Program: creature.h
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:creature header that the babies take only protected and public
** Input:nothing
** Output:nothing
******************************************************/
#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Creature{
    protected:
        string type;
        int strength; // How much damage we can inflict
        int hitpoints; // How much damage we can sustain
        string name; //The name of the creature
        double payoff; //How much you win for a creature
        double cost; //How much it cost to purchase the creature
        //string getSpecies(){return type;}; // Returns type of species
    public:
        Creature();
        Creature(string newType, int newStrength, int newHit);
        bool takeDamage(int);
        int getDamage();
        void setName(string name){this->name = name;};
        string getName(){return name;};
        Creature const& operator=(int const);



        string getSpecies(){return type;};

};



#endif
