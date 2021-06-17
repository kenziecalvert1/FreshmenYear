/******************************************************
** Program: patron.h
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the header for patron
** Input:nothing
** Output:nothing
******************************************************/
#ifndef PATRON_H
#define PATRON_H
#include<string>
#include "./cart.h"
class Patron {
	private:
		string name;
		int id;
		int books_checked_out;
	 public:
		 Patron();
		 ~Patron();
   		void check_out_books(const Cart &);
   		void check_in_books(const Cart &);
   		void view_my_books_out();
};

#endif
