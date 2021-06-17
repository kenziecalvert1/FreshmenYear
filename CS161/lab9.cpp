#include<iostream>
using namespace std;

void move(int,int **, int, int, int, int);
void print(int **, int, int);

void towers(int disk,int **b, int from_col,int to_col,int spare, int rows, int cols){
	if(disk >=0){
		towers(disk-1,b,from_col,spare,to_col,rows,cols);
		move(disk,b,from_col,to_col,rows,cols);
		print(b,rows,cols);
		towers(disk-1,b,spare,to_col,from_col,rows,cols);
	}
}

void move(int disk,int **b, int from_col,int to_col,int rows,int cols){
	int lowest;
	int i;
	cout<<"rows: "<<rows<<endl;

	for(i=rows-1;i>=0 && b[i][from_col] != 0; i--){
		disk=i;
	}
	for(i=rows-1;i>=0;i--){
		if(b[i][to_col]==0){
			lowest=i;
			break;
		}
	}
	b[lowest][to_col]=b[disk][from_col];
	b[disk][from_col]=0;
}

void print(int **b,int rows, int cols){
	for(int x=0;x<rows;x++){
		for(int y=0;y<cols;y++){
			cout<<b[x][y];
		}
		cout<<endl;
	}
	cout<<"------------------------"<<endl;
}

int main(){
	int cols=3,rows=3;
	int **b;
	b=new int*[rows];
	for(int i=0;i<rows;i++){
		b[i]=new int[cols];
	}
	b[0][0]=1;
	b[1][0]=2;
	b[2][0]=3;
	towers(2,b,0,2,1,rows,cols);
	return 0;
}
