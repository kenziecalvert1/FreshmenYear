/******************************************************
** Program: list.c
** Author: McKenzie Calvert
** Date: 06/11/2017
** Description:This is the thing that defines all the functions that are declared in the header
** Input:Does not take in input
** Output:Will push and pop and delete things on the linked list
******************************************************/
#include"./list.h"
#include<stdio.h>
/*********************************************************************
** Function:init
** Description:this will set the tail and head part of the link list to null
** Parameters:the struct list
** Pre-Conditions:that memory has been allocated
** Post-Conditions:the head and tail have now been set to null and aren't junk
*********************************************************************/
void init(struct list *t){//Precondition memory must be allocated for this list
    t->head=NULL;
    t->tail=NULL;
} //initialize empty list

/*********************************************************************
** Function:size
** Description:counts the size of the linked list
** Parameters:struct list
** Pre-Conditions:the list has been made and is in the oven
** Post-Conditions:really nothing it's just an int
*********************************************************************/
int size(struct list l){
    int t=0;
    struct node *temp;
    temp=l.tail;
    while(temp->next != NULL){
        temp=temp->next;
        t++;
    }
    return t;
} //return number of nodes in list

/*********************************************************************
** Function:print
** Description:this will print the list I think not 100%
** Parameters:the struct list
** Pre-Conditions:the list has to be made and preferably shit in it
** Post-Conditions:the list has been printed out
*********************************************************************/
void print(struct list l){


    if(empty(l)==0){
        struct node *temp;
        temp = l.tail;
        //printf("%d \n", temp->val);
        while(temp->next != NULL){
            printf("%d ",temp->val);
            temp=temp->next;
        }
        printf("\n");
    }
    else{
        printf("There is nothing in the list\n" );
    }
} //print the values in list

/*********************************************************************
** Function:push front
** Description:this will push things to the front of the queue. ONLY QUEUE!
** Parameters:the struct list and the int
** Pre-Conditions:that an int has been made to push to the front
** Post-Conditions:the list has been shifted
*********************************************************************/
void push_front(struct list *y, int input){
    if(y == NULL){
		printf("Stack null (push)\n");
		return;
	}
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if(y->tail == NULL && y->head == NULL){
        y->tail = new_node;
		y->head = new_node;
		new_node->next = NULL;
	}
	else{
		new_node->next = y->head;
	}
	y->head = new_node;
	new_node->val = input;
}//push to front of list

/*********************************************************************
** Function:push back
** Description:the push can be used on both the stack and queue
** Parameters:list and int
** Pre-Conditions:that the list has things on it and been allocated
** Post-Conditions:the list has been shifted
*********************************************************************/
void push_back(struct list *y, int input){

    if(y == NULL){
		printf("Stack null (push)\n");
		return;
	}

	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	if((y->tail == NULL) && (y->head == NULL)){
        //printf("line 63\n");
    	new_node->next = NULL;
        y->tail = new_node;
		y->head = new_node;
	}else {
        new_node->next = NULL;
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp=y->tail;
        temp->next=new_node;
		y->tail = new_node;
	}
	y->tail->val = input;
    printf("Pushed: %i \n", y->tail->val);
}//push to end of list

/*********************************************************************
** Function:front
** Description:just outputs what the value is at the front of the list
** Parameters:list
** Pre-Conditions:stuff has to be in the list
** Post-Conditions:nothing just returns what the val is
*********************************************************************/
int front(struct list w){
    return w.head->val;
} //returns value at the front of the list

/*********************************************************************
** Function:back
** Description:returns what the back value is
** Parameters:list
** Pre-Conditions:none
** Post-Conditions:returns an int
*********************************************************************/
int back(struct list r){
    return r.tail->val;
}  //returns value at the back of the list

/*********************************************************************
** Function:pop back
** Description:this will pop off the back node
** Parameters:the list
** Pre-Conditions:things must be in the list
** Post-Conditions:there is one less node in the list and the tail is pointed at a new spot
*********************************************************************/
int pop_back(struct list *u){
    struct node *current;
    if(u == NULL){
    	printf("Stack null (pop)\n");
    	return;
    }
	struct node *temp;
	int temp_num = -1;
	if(u->head == NULL && u->tail == NULL){
		return -1;
	}
	else if(u->head == u->tail){
	    temp = u->tail;
        temp_num=u->tail->val;
        free(temp);
        u->head=NULL;
        u->tail=NULL;
        return temp_num;
	}
	else{
        current = u->head;
        while(current->next!=u->tail){
            current=current->next;
        }
        temp = u->tail;
        temp_num=u->tail->val;
        free(temp);
        current->next=NULL;
        u->tail = current;
        return temp_num;
	}

} //remove node from back and return value

/*********************************************************************
** Function:remove front
** Description:this will remove the front node
** Parameters:the list
** Pre-Conditions:the list having a head
** Post-Conditions:the list is one node smaller and the head points to a different spot
*********************************************************************/
int remove_front(struct list *u){
    struct node *current;
    if(u == NULL){
        printf("Stack null (pop)\n");
        return;
    }
    struct node *temp;
    int temp_num = -1;
    if(u->head == NULL && u->tail == NULL){
        return -1;
    }
    else if(u->head == u->tail){
        temp = u->head;
        temp_num=u->head->val;
        free(temp);
        u->head=NULL;
        u->tail=NULL;
        return temp_num;
    }
    else{
        temp = u->head;
        temp_num=u->head->val;
        u->head=u->head->next;
        free(temp);
        return temp_num;
    }
}//remove node from front and return value


/*********************************************************************
** Function:empty
** Description:kinda like  a bool for c says if the list is empty or not
** Parameters:the list
** Pre-Conditions:the list has stuff and exhists
** Post-Conditions:returns 1 or 0 depending if there is things in the list or not
*********************************************************************/
int empty(struct list q){//

    if(q.head==NULL && q.tail==NULL){
        return 1;
    }else{
        return 0;
    }
}  //IS empty returns true if list is empty

/*********************************************************************
** Function:delete
** Description:this will take the node and delete it one by one
** Parameters:list
** Pre-Conditions:the list has to be empty
** Post-Conditions:the list is now deleted and all memory has been freed
*********************************************************************/
void delete(struct list *w){
    while(empty(*w)==0){
        pop_back(w);
    }
    free(w);
}  //remove all nodes from list
