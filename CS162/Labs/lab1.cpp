#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct mult_div_values{
	int mult;
	float div;
};

bool is_valid(char *r, char *c){
   	int kenzie =0;
	int rows,cols;
   	rows=atoi(r); cols=atoi(c);
   	if(rows>=0 && rows<=9){
		kenzie++;
	}else if(cols>=0 && cols<=9){
		kenzie++;
	}else if(kenzie ==2){
		return  true;
	}else{
		cout<<"Incorrect input "<<endl;
	   	return false;
	}
} 


int main(int argc,char *argv[]){
   	cout<<"kenzie"<<endl;
	char r[256];
	char c[256];
   	strcpy(r,argv[1]);
       	strcpy(c,argv[2]);
	is_valid(r,c);
	int rows;
	int cols;
   	rows=atoi(r); cols=atoi(c);
	
	struct mult_div_values **table= new struct mult_div_values*[rows];
	for(int i=0;i<rows;i++){
		table[i]= new mult_div_values[cols];
	}

	cout<<"44"<<endl;	
	for(int i=0;i<rows;i++){
	   	cout<<"46"<<endl;
		cin>> table[i]->mult;
		cin>> table[i]->div;
		cout<<"50"<<endl;
		cout<< table[i]->mult<<endl;
		cout<<table[i]->div<< endl;
	}
	return 0;
}

