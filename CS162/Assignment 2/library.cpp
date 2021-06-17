/******************************************************
** Program: library.cpp
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the main thing this controls hours, searching books, librarian remove books and chekout
** Input:int and strings
** Output:text on the screen
******************************************************/
#include<iostream>
#include<string.h>
#include<cmath>
#include<fstream>
#include<cstdlib>
#include "./library.h"
using namespace std;
/*********************************************************************
** Function:display_weekly_hours
** Description:shows hours
** Parameters:none
** Pre-Conditions:is called
** Post-Conditions:none
*********************************************************************/
void Library::display_weekly_hours(){
	cout<<"Monday "<<week[0].begin_time<<"-"<<week[0].end_time<<endl;
	cout<<"Tuesday "<<week[1].begin_time<<"-"<<week[1].end_time<<endl;
	cout<<"Wednesday "<<week[2].begin_time<<"-"<<week[2].end_time<<endl;
	cout<<"Thursday "<<week[3].begin_time<<"-"<<week[3].end_time<<endl;
	cout<<"Friday "<<week[4].begin_time<<"-"<<week[4].end_time<<endl;
	if(week[5].begin_time.compare("0")==0){
		cout<< "Saturday Closed"<<endl;
	}
	else{
		cout<<"Saturday "<<week[5].begin_time<<"-"<<week[5].end_time<<endl;
	}
	if(week[6].begin_time.compare("0")==0){
		cout<< "Sunday Closed"<<endl;
	}else{
		cout<<"Sunday "<<week[6].begin_time<<"-"<<week[6].end_time<<endl;
	}
}/*********************************************************************
** Function:Library
** Description:default
** Parameters:none
** Pre-Conditions:this is ran
** Post-Conditions:idk im tired
*********************************************************************/
Library::Library(){
//default
	for(int i=0; i<5;i++){
		week[i].begin_time="9:00am";
		week[i].end_time="5:00pm";

	}
	week[6].begin_time="0";
	week[7].begin_time="0";
	books=NULL;

	num_books=0;
}/*********************************************************************
** Function:~library
** Description:deconstuctor
** Parameters:none
** Pre-Conditions:all is ran
** Post-Conditions:idk
*********************************************************************/
Library::~Library(){
	empty();
}/*********************************************************************
** Function:library
** Description:default times
** Parameters:num
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Library::Library(int num){
	num_books = num;
	books = NULL;
	for(int i=0; i<5;i++){
		week[i].begin_time="9:00am";
		week[i].end_time="5:00pm";

	}
	week[5].begin_time="0";
	week[6].begin_time="0";
	read_books();
	//display_books();
}
/*********************************************************************
** Function:clears stuff
** Description:empty
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::empty(){
	if(books != NULL){
		for(int i=0;i<num_books;i++){
			delete [] books[i].authors;
		}
    	delete [] books;
    	books = NULL;
	}
}
/*********************************************************************
** Function:read books
** Description:reads in books from file
** Parameters:none
** Pre-Conditions:the program is running
** Post-Conditions:idk
*********************************************************************/
void Library::read_books(){
	int spos = 0;
	int epos;
	ifstream file;
	file.open("books.txt");
	if (books != NULL)
		empty();
	books=new book[num_books];	//This makes the array big enough for the books
	string str;

	for(int i=0;i<num_books && !file.eof();i++){
		//cin.ignore();
		getline(file,str);
		spos = 0;
		epos=str.find('|',spos);

		books[i].title=str.substr(spos,(epos-spos-1));
		spos=epos+2;
		epos=str.find('|',spos);

		books[i].num_authors=atoi(str.substr(spos,(epos-spos-1)).c_str());

		books[i].authors=new string[books[i].num_authors];
		for(int j=0;j<books[i].num_authors;j++){
			spos=epos+1;
			epos=str.find('|',spos++);
			books[i].authors[j]=str.substr(spos,(epos-spos-1));
		}
		spos=epos+1;
		epos=str.find('|',spos++);
		books[i].year=atoi(str.substr(spos,(epos-spos-1)).c_str());
		spos=epos+1;
		epos=str.find('|',spos++);
		books[i].copies=atoi(str.substr(spos, (epos-spos)-1).c_str());
	}
	file.close();
}
/*********************************************************************
** Function:display books
** Description:this will show the details of the books
** Parameters:const books
** Pre-Conditions:this is called
** Post-Conditions:none
*********************************************************************/
void Library::display_book(const book& b){
	cout<<b.title << " ";

	for(int j=0;j<b.num_authors;j++){
		cout<<b.authors[j] << " ";
	}
	cout<<b.year << " ";
	cout<<b.copies << endl;
}
/*********************************************************************
** Function:display books
** Description:this will show the details of the books
** Parameters:const books
** Pre-Conditions:this is called
** Post-Conditions:none
*********************************************************************/
void Library::display_books(){
	cout<<"These are the books in the library"<<endl;
	for(int i=0;i<num_books;i++){
		display_book(books[i]);
	}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
Library::Library(const Library &other){
	num_books=other.num_books;
	//copy construstor
	if(num_books==0){
		books=NULL;
	}
	else{
		books=new book[num_books];
		for(int i=0;i<num_books;i++){
			books[i]=other.books[i];
		}
	}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::operator=(const Library &other){
	for(int i=0;i<num_books;i++){
		delete [] books[i].authors;
	}
	delete [] books;
	books = NULL;
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::search_by_title(){
	string usertitle;
	cout<<"PLease enter in a title you would like to search for: ";
	cin.ignore();
	getline(cin,usertitle);
	read_books();

	for(int i=0;i<num_books;i++){
		if(books[i].title.compare(usertitle)==0){
			display_book(books[i]);
			return;
		}
	}
	//cout<<"book not found"<<endl;
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::search_by_author(){
	string userauthor;
	cout<<"PLease enter in a author you would like to search for: ";
	cin.ignore();
	getline(cin,userauthor);
	read_books();
	for(int i=0;i<num_books;i++){
		for(int j=0;j<books[i].num_authors;j++){
			if(books[i].authors[j].compare(userauthor)==0){
				display_book(books[i]);
				return;
			}
		}
	}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::search_by_year(){
	int useryear;
	cout<<"PLease enter in a year you would like to search for: ";
	cin>>useryear;
	read_books();
	for(int i=0;i<num_books;i++){
		if(books[i].year==useryear){
			display_book(books[i]);
		}
	}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::search_books(){
	int choice;
	cout<<"Would you like to search for books by title(1), author(2),or year(3): ";
	cin>>choice;
	switch(choice){
		case 1:
			search_by_title();
			break;
		case 2:
			search_by_author();
			break;
		case 3:
			search_by_year();
			break;
		default:
			cout<<"Please enter in a valid option: "<<endl;
			break;

	}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::checkin(){
	string usertitle;
	cout<<"PLease enter in a title you would like to checkin: ";
	cin.ignore();
	getline(cin,usertitle);
	read_books();

	for(int i=0;i<num_books;i++){
		books[i].copies+1;
		}
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::checkout(){
	string usertitle;
	cout<<"PLease enter in a title you would like to checkout: ";
	cin.ignore();
	getline(cin,usertitle);
	read_books();

	for(int i=0;i<num_books;i++){
		books[i].copies-1;
		}
}
/*********************************************************************
** Function:patron starts
** Description:default stuff
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::patron_start(){
	int start;
   	do{
	   	cout<<"Do you want to look for a book(1),look at the whole library(2), add a book to your cart(3), check out a book(4), check in a book(5), see library hours(6), or leave(0): ";
		cin>>start;
		if(start==1){
			search_books();
		}else if(start==2){
			display_books();


		}else if(start==3){
			//c.add_to_cart(book const book&);
		}
		else if(start==4){
			checkout();
		}
		else if (start==5){
			checkin();
		}
		else if(start==6){
			display_weekly_hours();
		}
	//	else{
	//		cout<<"that wasn't correct input"<<endl
	//	}


	}while(start!=0);

}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::books_checkout(){

	string checked;
	ifstream file;
	file.open("checkout.txt");
	while(!file.eof()){
		getline(file,checked);
		cout<<checked<<endl;
	}
	file.close();
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::remove_books(){
	book *newbook=new book[num_books--];

	string usertitle;
	cout<<"PLease enter in a title you would like to remove: ";
	cin.ignore();
	getline(cin,usertitle);
	read_books();

	for(int i=0;i<num_books;i++){
		if(books[i].title.compare(usertitle)==0){
			delete [] books[i].authors;
				i--;
		}else{
			newbook[i]=books[i];
		}
	}

}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/
void Library::add_book(){
	string title;
	cout<<"Please enter in the title of the new book: ";
	cin>>title;
	int numauthors;
	cout<<"number of authors: ";
	cin>>numauthors;
	string author;
	cout<<"author names: ";
	cin>>author;
	int year;
	cout<<"year of publication: ";
	cin>>year;
	int copy;
	cout<<"number of copies: ";
	cin>>copy;
}
/*********************************************************************
** Function:library
** Description:big three
** Parameters:const library
** Pre-Conditions:none
** Post-Conditions:none
*********************************************************************/ 
void Library::librarian_start(){
	int start;
   	do{
	   	cout<<"Would you like to change library hours(1), Add a new book to the library(2), Remove a book from the library(3), view all books checked out(4), or leave(0): ";
		cin>>start;
		if(start==1){
			display_weekly_hours();
		}else if(start==2){
			add_book();

		}
		else if(start==3){
			remove_books();

		}
		else if(start==4){

			books_checkout();

		}


	}while(start!=0);

}
