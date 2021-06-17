/******************************************************
** Program: patron.cpp
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the place where the patron checks in and out books and yeah
** Input:int and strings
** Output:words on screen
******************************************************/
#include<iostream>
#include<string>
#include<cmath>
#include<fstream>
#include "./patron.h"

using namespace std;
/*********************************************************************
** Function:patron
** Description:defaiult
** Parameters:none
** Pre-Conditions:the program is ran
** Post-Conditions:a lot
*********************************************************************/
Patron::Patron(){
	name="";
	id=0;
	books_checked_out=0;
}
/*********************************************************************
** Function:~patron
** Description:this frees memory
** Parameters:noen
** Pre-Conditions:everything is ran
** Post-Conditions:none its all clean
*********************************************************************/
Patron::~Patron(){

}
/*********************************************************************
** Function:check out books
** Description:this checks the book out to the patron
** Parameters:const Cart
** Pre-Conditions:the user selects this
** Post-Conditions:the patron gets added to booksout list
*********************************************************************/
void Patron::check_out_books(const Cart & checkout){
	string bookout;
	cout<<"Please enter in the name of the book you are checking out: ";
	cin>>bookout;
	//add this name to the check out array

}
/*********************************************************************
** Function:chekc in books
** Description:chekcs in
** Parameters:const cart
** Pre-Conditions:the user selects this
** Post-Conditions:the patron gets taken off the check out list
*********************************************************************/
void Patron::check_in_books(const Cart & checkin){
	string bookin;
	cout<<"Please enter in the name of the book you are checking in: ";
	cin>>bookin;
	//need to add in a way to put the name back in the library array
}
/*********************************************************************
** Function:view books out
** Description:this will view the books the patron has checked out
** Parameters:none
** Pre-Conditions:gets called
** Post-Conditions:none
*********************************************************************/
void Patron::view_my_books_out(){
	//checkout array needs to appear
}
