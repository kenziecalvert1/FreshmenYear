#include<iostream>
#include<cmath>
#include<climits>
#include<cstdlib>
#include<string.h>
#include"mult_div.h"

using namespace std;
using std::string;

int main(int argc, char *argv[]){
	int one=atoi(argv[1]);
	cout<<one<<endl;
	int two=atoi(argv[2]);
	cout<<two<<endl;

	cout<<"yes"<<endl;
	if(one!=0&&two!=0){
		one++;
		two++;
		struct mult_div_values **table=create_table(one,two);
		set_mult_values(table,one,two);
		set_div_values(table,one,two);
		for(int i=0;i<one;i++){
			for(int j=0;j<two;j++){
				cout<<table[i][j].mult;
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i=0;i<one;i++){
			for(int j=0;j<two;j++){
				cout<<table[i][j].div;
			}
			cout<<endl;
		}
		delete_table(table,one);
	}else{
		cout<<"try again enter first value"<<endl;
		cin>>argv[1];
		cout<<"second value"<<endl;
		cin>>argv[2];

		main(argc,argv);
	}
	return 0;

}
