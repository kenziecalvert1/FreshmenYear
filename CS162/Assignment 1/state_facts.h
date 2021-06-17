#include<iostream>
#include<cmath>
#include<fstream>
#include<string.h>
#include<cstdlib>

using namespace std;

struct county {
 string name; //name of county
 string *city; //name of cities in county
 int cities; //number of cities in county
 int population; //total population of county
 float avg_income; //avg household income
 float avg_house; //avg household price
};

struct state {
 string name; //name of state
 struct county *c; //name of counties
 int counties; //number of counties in state
 int population; //total population of state
};


bool is_valid_argument(char *argc[], int statenum);
state * create_states(int statenum);
void get_state_data(state *stateinfo, int statenum, ifstream &input);
county * create_counties(int countynum);
void get_county_data(county *countyinfo,int countynum,ifstream &input);
void delete_info(state **stateinfo,int statenum);

