/******************************************************
** Program: librarian.cpp
** Author: mckenzie calvert
** Date: 04/30/2017
** Description: this controls what the librarian does
** Input:int and strings
** Output:words on the screeen
******************************************************/
#include "./librarian.h"
using namespace std;

/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Librarian::Librarian(){
    name="";
    id=-1;
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Librarian::~Librarian(){

}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Librarian::change_library_hours(){

	cout<<"Please enter in id num to edit hours: ";
	if(this->id==123 ){

	}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Librarian::add_new_books(const Cart &){
    struct book newbook;
    cout<<"Please enter an author: ";
    //cin>>book.author;

}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Librarian::remove_old_books(){

}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Librarian::view_all_books_checked_out(){
	cout<<booksout;
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/ 
void Librarian::view_specific_book_checked_out(string checkedout){

	cout<<"Please enter in what book you would like to see if its free to check out: ";
	cin>>booksout;
}
