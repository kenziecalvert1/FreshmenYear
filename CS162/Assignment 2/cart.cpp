/******************************************************
** Program: cart.cpp
** Author: mckenzie calvert
** Date: 04/30/2017
** Description: this is the cart cpp that cotrols the car
** Input:this will take in book title
** Output:nothing
******************************************************/
#include "./cart.h"
using std::string;
/*********************************************************************
** Function: cart default
** Description:this is the defaults
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Cart::Cart(){
    books=NULL;
    cartnum=0;

}
/*********************************************************************
** Function:~cart
** Description:this deletes the cart
** Parameters:none
** Pre-Conditions:cart has to run
** Post-Conditions:no more cart
*********************************************************************/
Cart::~Cart(){
    if(cartnum>0){
        for(int i=0;i<cartnum;i++){
            delete [] books[i].authors;
        }
        delete [] books;
    }
}
/*********************************************************************
** Function:resize books
** Description:resizes the books array
** Parameters:num
** Pre-Conditions:take in old array
** Post-Conditions:outputs the new array with correct size
*********************************************************************/
void Cart::resize_books(int num){
    book *cartbook=new book[num];
    for(int i=0;i<cartnum-1;i++){
        cartbook[i]=books[i];
    }
    books=cartbook;
}
/*********************************************************************
** Function: add to cart
** Description:this adds the books to the cart
** Parameters:const books
** Pre-Conditions:the user selects they want to add to the cart
** Post-Conditions:the cart has a book on it
*********************************************************************/
void Cart::add_to_cart(const book& newbook){
    book *cartbook=new book[cartnum++];
    for(int i=0;i<cartnum-1;i++){
        cartbook[i]=books[i];
    }
}
/*********************************************************************
** Function:display book
** Description:this shows a book and their details
** Parameters:const book
** Pre-Conditions:the funciton is called
** Post-Conditions:the info is printed on screen
*********************************************************************/
void Cart::display_book(const book& b){
    cout<<b.title << " ";

    for(int j=0;j<b.num_authors;j++){
        cout<<b.authors[j] << " ";
    }
    cout<<b.year << " ";
    cout<<b.copies << endl;
}
/*********************************************************************
** Function:display books
** Description:this shows all books and their details
** Parameters:const book
** Pre-Conditions:the funciton is called
** Post-Conditions:the info is printed on screen
*********************************************************************/
void Cart::display_books(){
    	cout<<"These are the books in the cart"<<endl;
    	for(int i=0;i<cartnum;i++){
    		display_book(books[i]);
    	}
}
/*********************************************************************
** Function:empty cart
** Description:clears mem
** Parameters:none
** Pre-Conditions:the cart is all done
** Post-Conditions:all clean
*********************************************************************/
void Cart::empty_cart(){
	for(int i=0;i<cartnum;i++){
		delete [] books[i].authors;
	}
    delete [] books;
    books = NULL;
}
/*********************************************************************
** Function:cart
** Description:this is a copy constructor
** Parameters:const cart
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Cart::Cart(const Cart &other){
	cartnum=other.cartnum;
	//copy construstor
	if(cartnum==0){
		books=NULL;
	}
	else{
		books=new book[cartnum];
		for(int i=0;i<cartnum;i++){
			books[i]=other.books[i];//not sure if this has a . or is just one word after the =
		}
	}
}
/*********************************************************************
** Function:operator
** Description:part of big three
** Parameters:const cart
** Pre-Conditions:all the other stuff has ran
** Post-Conditions:none
*********************************************************************/
void Cart::operator=(const Cart &other){
    empty_cart();
    this->books=other.books;
}
