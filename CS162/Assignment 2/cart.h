/******************************************************
** Program: cart.h
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the header for cart
** Input:nothing
** Output:nothing
******************************************************/
#ifndef CART_H
#define CART_H
#include<iostream>
#include "./structs.h"

using namespace std;

class Cart {
	private:
		book *books;
		int cartnum;
		void resize_books(int);
		void display_book(const book&b);
	public:
		Cart();
		~Cart();
 		void add_to_cart(const book &);
  		void display_books();
  		void empty_cart();
		Cart(const Cart &other);
		void operator=(const Cart &other);
};

#endif
