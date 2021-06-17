#include<iostream>
#include<cmath>
#include<climits>
#include<cstdlib>
#include<string.h>
#include"mult_div.h"

using namespace std;
using std::string;

mult_div_values** create_table(int m,int n){
	mult_div_values **a = new mult_div_values*[m];
	for(int i=0;i<m;i++){
		a[i]=new mult_div_values[n];
	}
	return a;
}

void set_mult_values(mult_div_values **table,int m, int n){
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			table[i][j].mult=i*j;
		}
	}
}

void set_div_values(mult_div_values **table,int m,int n){
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			table[i][j].div=float(i)/float(j);
		}
	}
}


void delete_table(mult_div_values **table,int m){
	for(int i=0;i<m;i++){
		delete table[i];
	}
	delete [] table;
}
