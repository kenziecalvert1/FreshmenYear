/*********************************************************************
** Program Filename:compiler.h
** Author:McKenzie Calvert
** Date:6/11/2017
** Description:This is a mini compiler that checks (){} and []
** Input:Only what I said above
** Output:IF the code compiles or not
*********************************************************************/
#include<stdio.h>
#include"./list.h"
/*********************************************************************
** Function:main for compiler
** Description:this is what the whole compiler runs off of and it all has to be in main since I can't mess with the header file that jennifer gave me
** Parameters:none
** Pre-Conditions:none
** Post-Conditions:this will output if the users c style string of characters will compile or not
*********************************************************************/
int main(){
    struct list *stack = (struct list *)malloc(sizeof(struct list ));//allocates space for the stack
    init(stack);//sets head and tail to null
    int i=0;

    char string[256];//allocates space for array
    printf("Please enter in either (), [],{}:  ");
    fgets(string,256,stdin);
    while(!(string[i]=='\0' )){
        //This checks to see if it is left and pushes it to the stack
        if(string[i]=='('){ push_back(stack,2);}
        if(string[i]=='{'){push_back(stack,1);}
        if(string[i]=='['){push_back(stack,0);}

        if(string[i] ==')'|| string[i]==']' || string[i]=='}'){
            int w;
            if(string[i]==')'){w=2;}
            if(string[i]=='}'){w=1;}
            if(string[i]==']'){w=0;}
            int k=pop_back(stack);

            if(k!= w){
                printf("Does not compile! \n" );
                return;
            }
        }
        i++;
    }
    printf("All of the code compiled! All is good in bingo town! Woohoo \n");
    free(stack);
    return 0;
}
