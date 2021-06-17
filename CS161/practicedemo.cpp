#include<iostream>
#include<stdlib.h>
using namespace std;

void fun(int board[][5],int num, int userinput){
	int c=1;

   	for(int i=0;i<5;i++){
		for(int j=0;j<num;j++){
		   	if(userinput >=c)
				board[i][j]=c++;
			else
			   	board[i][j]=0;
	
		     	cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}

}

int main(){
   	int board[5][5];
	int num=5;

	int userinput;
	cout<<"Please enter a number (1-25): ";
	cin>>userinput;
	
	
	

   	fun(board,num,userinput);
	return 0;
}
