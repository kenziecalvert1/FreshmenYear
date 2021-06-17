#include<iostream>
using namespace std;

int create_space(int *&n){
	n = new int;
}
void setValue(int *&n) {
	cout<<"Please enter in a positive int: ";
	cin>>*n;
}

void do_stuff(int *&n){
	delete n;
	n=NULL;
}

int main(){
   	int *n;
	create_space(n);
	setValue(n);
	do_stuff(n);
	cout<<n<<endl;	
	return 0;
}
