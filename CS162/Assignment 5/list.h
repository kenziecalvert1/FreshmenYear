/******************************************************
** Program: list.h
** Author: McKenzie Calvert
** Date: 06/11/2017
** Description:This is the list.h that Jennifer gave us
** Input:This is a header is doesn't take in anything
** Output:Nothing again still a header
******************************************************/
#ifndef LIST_H
#define LIST_H
#include<stdlib.h>


struct node {
   int val;
   struct node *next;
};

struct list {
   struct node *head;
   struct node *tail;
};

void init(struct list *); //initialize empty list
int size(struct list); //return number of nodes in list
void print(struct list); //print the values in list
void push_front(struct list *, int);//push to front of list
void push_back(struct list *, int); //push to end of list
int front(struct list);  //returns value at the front of the list
int back(struct list);  //returns value at the back of the list
int pop_back(struct list *); //remove node from back and return value
int remove_front(struct list *);//remove node from front and return value
int empty(struct list);  //returns true if list is empty
void delete(struct list *);  //remove all nodes from list

#endif
