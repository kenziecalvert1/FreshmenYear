/******************************************************
** Program: librarian.h
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the header for librarian
** Input:nothing
** Output:nothing
******************************************************/
#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include<iostream>
#include<string>
#include "./cart.h"
using namespace std;
class Librarian{
	private:
		string name;
		int id;
		string booksout;

	public:

		Librarian();
		~Librarian();
	 	void change_library_hours();
 	 	void add_new_books(const Cart &);
	 	void remove_old_books();
  	 	void view_all_books_checked_out();
  	 	void view_specific_book_checked_out(string);
};


#endif
