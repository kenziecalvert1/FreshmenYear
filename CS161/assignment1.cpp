/*
 * Program:assignment1.cpp
 * Author:McKenzie Calvert
 * Date:1/15/17
 * Description:Determining the max and mins of signed and unsigned numbers in 1 byte
 * Input:none
 * Output:min/max of signed and unsigned numbers. 
 * */


#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

/*
 * Function:Main
 * Description: I have all my code in the main just so figure out how C++ works but know to have other functions defined and only call them in main
 * Parameters: I really don't know what this means but oh well
 * Precondition:none
 * Postconditions: none
 * Return: Zero duh
 */

int main() {
	cout<<UINT_MAX << endl;
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
	cout<<USHRT_MAX <<endl;
	cout<<SHRT_MAX<<endl;
	cout<<SHRT_MIN<<endl;
	cout<<ULONG_MAX<<endl;
	cout<<LLONG_MAX<<endl;
	cout<<LLONG_MIN<<endl;

	cout<<pow(2,8)-1<<endl;
	cout<<-1*pow(2,7)<<endl;
	cout<<pow(2,7)-1<<endl;

	
	cout<<"Please enter in an x 0-8"<<endl;
	int x;
	cin>>x;
		cout<<pow(2,x)-1<<endl;
		cout<<-1*pow(2,(x-1))<<endl;
		cout<<pow(2,(x-1))-1<<endl;
	

return 0;
}
