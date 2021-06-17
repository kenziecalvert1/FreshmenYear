/******************************************************
** Program: structs.h
** Author: mckenzie calvert
** Date: 04/30/2017
** Description:this is the header for structs
** Input:nothing
** Output:nothing
******************************************************/
#ifndef STRUCTS_H
#define STRUCTS_H
#include<string>
using std::string;
struct hours{
	string begin_time;
	string end_time;
};

struct book{
	string title;
	int num_authors;
	string *authors;
	int year;
	int copies;
};

#endif
