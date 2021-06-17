#include<iostream>
/*********************************************************************
** Program Filename:pokemon.h
** Author:McKenzie Calvert
** Date:May 29,2017
** Description:this is the mother class of all the pokemon
** Input:nothing
** Output:nothing
*********************************************************************/
#ifndef POKEMON_H
#define POKEMON_H
#include<string>
#include<cstdlib>

using namespace std;
class Pokemon{

    protected:
        int level;
        string type;
    public:
        Pokemon();
        //Pokemon(Pokemon&);
        //template<class T>
        void operator=(const Pokemon&);
        string get_type();
        int get_level();
        void increase_level();
        //void percept(){};
        ~Pokemon(){int x=0;};
        virtual bool captured() = 0;


};

#endif
