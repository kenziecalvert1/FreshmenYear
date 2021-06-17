/******************************************************
** Program: driver.cpp
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this takes in if the person is a patron or librarian
** Input:int
** Output:words on the screen
******************************************************/
#include<iostream>
#include<fstream>
#include<cmath>
#include<climits>
#include<string.h>
#include<cstdlib>
#include "./library.h"
using namespace std;


/*********************************************************************
** Function:patron login_patron
** Description:this will check to see if the patron has correct login info
** Parameters:none
** Pre-Conditions:the user enters in what they want to log in as
** Post-Conditions:true or false
*********************************************************************/
bool patron_login(){

	ifstream input;
	int temp=0;
	int idnum;
	bool ret=false;
	cout<<"Please enter in your ID number: ";
	cin>>idnum;

	input.open("login_patron.txt");
	while(!input.eof()){
		input>>temp;
		if(idnum==temp){
			ret =true;
			break;
		}
	}
	if(ret !=true){
		cout<<"PLease enter in valid Patron ID"<<endl;
	}
	input.close();
	return ret;
}
/*********************************************************************
** Function:patron login_librarian
** Description:this will check to see if thelibraryainhas correct login info
** Parameters:none
** Pre-Conditions:the user enters in what they want to log in as
** Post-Conditions:true or false
*********************************************************************/
bool librarian_login(){

	ifstream input;
	int temp=0;
	int idnum=0;
	bool ret = false;
	cout<<"Please enter in your ID number: ";
	cin>>idnum;

	input.open("login_librarian.txt");
	while(!input.eof()){
		input>>temp;
		if(idnum==temp){
			ret = true;
			break;
		}
	}
	if(ret !=true){
		cout<<"PLease enter in valid librarian ID"<<endl;
	}
	input.close();
	return ret;
}

/*********************************************************************
** Function:main
** Description:this lets the user choose what they want to log in as
** Parameters:argc argv
** Pre-Conditions:none
** Post-Conditions:the user has picked what they want to log in as
*********************************************************************/
int main(int argc,char *argv[]){
	int num=atoi(argv[1]);
	Library l(num);
	int login=0;
	bool good = false;
	do{
		cout<<"Are you a Patron(1) or Librarian(2) or View Library Hours(3) or Quit(0): ";
		cin>>login;
		if(login==1){
			do{
				good = patron_login();

			}while(good==false);
			l.patron_start();
		}
		else if(login==2){
			librarian_login();
			while(librarian_login==false){
				librarian_login();
			}
			l.librarian_start();
		}else if(login==3){
			l.display_weekly_hours();
		}
		else if(login!=0){
			cout<<"Invalid Input dummy"<<endl;
		}

	}while(login !=0);

	return 0;
}
