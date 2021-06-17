#include<iostream>

#define PROMPT "Please enter a whole number: "
#define NOT_PRIME "The number is not a prime number.\n"
#define PRIME "The number is a prime number.\n"

using std:: cout;
using std::cin;
using std::endl;

void is_prime(int);

int main(){
	char number;

	cout<<PROMPT;
	cin>>number;
	cout<<number<<endl;;
	is_prime(number);
	return 0;
}

void is_prime(int number){
   	cout<<" in function"<<endl;
	for(int i=2;i<(number-1);i++){
	   if(number%i==0){
	   	cout<<NOT_PRIME<<number<<endl;;
		return;
	   }else{
	 	cout<<PRIME<<number<<endl; 
	   	return;
	   }
 	}
}

