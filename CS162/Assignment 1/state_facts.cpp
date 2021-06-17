/*
 * Program:state_facts.cpp
 * Author:McKenzie Calvert
 * Date:April 16,2017
 * Description: This controls pretty much everything it' s like a mother board
 * Input: This takes in only ints
 * Output:everything 
 */
#include<iostream>
#include<cmath>
#include<string.h>
#include<climits>
#include<cstdlib>
#include"state_facts.h"

using namespace std;
/*
 *  * Function:is valid arguments
 *   * Description: checks if this is input is valid
 *    * Parameters: argc and statenum
 *     * Pre conditions:nothing this is just the start of the program
 *      * Post conditions:this is true
 *       * return:true
 *        */

bool is_valid_arguments(char *argc[],int statenum){
   
	if(argc[1]=="-s" || argc[1]=="-f" && argc[3]=="-s" || argc[3]=="-f"){
		if(atoi(argc[2])>=0){
			return true;
		}
		
	}
}

/*
 *  * Function:create states
 *   * Description:makes array
 *    * Parameters:state num
 *     * Pre conditions:nothing
 *      * Post conditions:idk
 *       * return:the array
 *        */
state * create_states(int statenum){
	state * stateinfo;
	stateinfo= new state[statenum];
	return stateinfo;
}
/*
 *  * Function:get state data
 *   * Description:gets all the struct stuff
 *    * Parameters:state info,state num, the file
 *     * Pre conditions:has to read the file
 *      * Post conditions:gets all the county stuff
 *       * return:county info
 *        */
void get_state_data(state *stateinfo, int statenum, ifstream &input){
	for(int i=0;i<statenum;i++){
		input>>stateinfo[i].name;
		input>>stateinfo[i].populaiton;
		input>>stateinfo[i].counties;
		int countynum=stateinfo[i].counties;
		county * countyinfo;
		stateinfo[i].c=new county[countynum];
		int countynum=stateinfo[i].counties;
		get_county_data(countyinfo,countynum,&input);
	}
}
/*
 *  * Function:create counties
 *   * Description:makes county array
 *    * Parameters:county num
 *     * Pre conditions:get state data
 *      * Post conditions:city data
 *       * return:county array
 *        */
county * create_counties(int countynum){
	county * countyinfo;
	countyinfo=new county[countynum];
	return countyinfo;
}

/*
 *  * Function:get county data
 *   * Description:gets the county struct all ready
 *    * Parameters:countyinfo county num and file
 *     * Pre conditions:create counties
 *      * Post conditions:nothing
 *       * return:get stuff
 *        */
void get_county_data(county * countyinfo, int countynum, ifstream &input){
	for(int i=0;i<countynum;i++){
		input>>countyinfo[i].name;
		inpput>>countyinfo[i].population;
		input>>countyinfo[i].avgincome;
		input>>countyinfo[i].avghouse;
		input>>countyinfo[i].cities;
		int numcities=countyinfo[i].cities;

		for(int j=0;j<numcities;j++){//This creates the array of cities
			input>>countyinfo[i].numcities[j];
		}

	}
}

/*
 *  * Function:delete info
 *   * Description:deletes stuff
 *    * Parameters:stateinfo and statenum
 *     * Pre conditions:everything
 *      * Post conditions:nothing its all dead now
 *       * return:nothing 
 *        */
void delete_info(state **stateinfo,int statenum){
	for(int i=0;i<statenum;i++){
		delete stateinfo[i];
	}
	delete [] stateinfo;
}
