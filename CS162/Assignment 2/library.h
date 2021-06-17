/******************************************************
** Program: library.h
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the header for library
** Input:nothing
** Output:nothing
******************************************************/
#ifndef LIBRARY_H
#define LIBRARY_H
#include "./patron.h"
#include "./librarian.h"
#include "./cart.h"
#include "./structs.h"
#include<string>
using std::string;
class Library {
	private:
		hours week[7];
		int num_books;
		book *books;
		Cart c;
		Librarian l;
		Patron p;
		void search_by_year();
		void search_by_author();
		void search_by_title();
		void display_book(const book& b);
		void empty();
	public:
		~Library();
		void display_weekly_hours();
		void display_books();
		void read_books();
		void search_books();
		void books_checkout();
		void checkin();
		void remove_books();
		void add_book();
		void checkout();
		Library(int num);
		Library();
		Library(const Library &other);
		void patron_start();
		void librarian_start();
		void operator=(const Library &other);
};

#endif
