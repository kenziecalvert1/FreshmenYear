/*
 *  * Program: run_facts.cpp
 *   * Author:McKenzie Calvert
 *    * Date: 4/16/17
 *     * Input:integers
 *      * Output:the county and state and city info
 *       */

#include<iostream>
#include<cmath>
#include<climits>
#include<string.h>
#include<cstdlib>
#include"state_facts.h"

using namespace std;
do{
	/*
	 * Function:mother main
	 * Description:this is in charge of everything
	 * Perameters:argc argv
	 * Precondition:none
	 * Postconditions:everything
	 * return: everything
	 */
   	int main(int argc,char *argv[]){
		int statenum;
		string filename;
		ifstream input;
		input.open(filename);
		if(argc[1]=="-f" || argc[3]=="-f"){
		        filename==argc[2];
			filename==argc[4];
		}	
		while(argc[1]!="-s" || argc[1]!="-f" && argc[3]!="-s" || argc[3]!="-f"){
	   		cout<<"Please enter in correct input"<<endl;
                	int statenum;
                	cout<<"Please enter in the number of states: ";
                	cin>>statenum;
                	argc[2]=statenum;
                	string filename;
                	cout<<"Please enter in your file name: ";
                	cin>>filename;
                	argc[4]=filename;
			argc[1]="-s";
	        	argc[3]="-f";
		}
 
		bool is_valid_arguments(char *argc[], int statenum);//This checks to see if there is enough input in the program
   	
		state * careate_states(int statenum);//THis creates the array for the states
   	
		void get_state_data(state *stateinfo, int statenum, ifstream &);//This accesses the struct 
   	
		
		county * create_counties(int countynum);
   		void get_county_data(county *countyinfo, int countynum, ifstream & input);
   		void delete_info(state ** stateinfo, int statenum);
   
   		int playagain;
		cout<<"Wanna play again? yes-0 or no-1 ";
		cin>>playagain;
		return 0;
	}
}while(playagain==1)
