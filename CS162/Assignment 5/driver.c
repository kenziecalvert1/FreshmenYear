/******************************************************
** Program: driver.c
** Author: McKenzie Calvert
** Date: 06/11/2017
** Description:THis is the driver for the first part of the assignment aka the push
** pop stuff on the linked list
** Input:takes in nothing from the user
** Output:strings that show what has been popped off and on the stack or queue
******************************************************/
#include<stdlib.h>
#include<stdio.h>
#include"./list.h"
/*********************************************************************
** Function:main for list.h aka the first part of the assignment
** Description:This will push and pop and delete nodes off a link list stack or queue
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:That memory was allocated to  make the list, that the integers have been correctly pushed and popped off the stack or queue
*********************************************************************/
int main(){
    int i;
    int p;
    struct list *stack = (struct list *)malloc(sizeof(struct list ));
    init(stack);
    struct list *queue = (struct list *)malloc(sizeof(struct list));
    init(queue);

    for( i = 0; i < 10; i++){
        printf("Adding: %d\n", i);
		//push_back(stack, i);
        push_front(stack, i);
	}
    printf("Printing front value %i\n", front(*stack) );
    printf("Printing back value: %i \n" ,back(*stack));
    print(*stack);
    printf("\n");
	for(i = 0; i < 10; i++){
        //printf("Popped off for queue %d \n",pop_back(queue);
        //comment line 24 out to test pop off for queue
		//p = pop_back(stack);
		//printf("Popped: %d\n", p);
        //Comment line 24 and 25 to run pop back for stack
        printf("Printing remove front: %d\n", remove_front(stack) );
        //remove_front(stack);
	}
    printf("Printing empty%d\n", empty(*stack));
    delete(stack);
    printf("Printing empty%d\n", empty(*stack));
    delete(queue);
	return 0;
}
