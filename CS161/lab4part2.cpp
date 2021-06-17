#include<cmath>
#include<iostream>

using namespace std;

double area(double a, double b, double c){
	double total;
	double answer;
	total=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	answer=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	cout<<total<<endl;
	cout<<answer<<endl;

}



int main(){
	cout<<"Please enter a value for a: ";
	double a;
	cin>>a;
	cout<<"Please enter in a value for b: ";
	double b;
	cin>>b;
	cout<<"Please enter in a value for c: ";
	double c;
	cin>>c;

	

	area(a,b,c);



return 0;
}

