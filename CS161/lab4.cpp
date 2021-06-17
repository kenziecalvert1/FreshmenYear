#include<iostream>
#include<cmath>
#include<climits>

using namespace std;



//Name:F
//Description:This is the lines function
//Pre conditions:none
//Post conditions:none
//Return: 2*x 

 double f(double x){
	return 2*x;
}

//Name:Area
//Description:This finds the area under the curve
//Pre conditions:none
//Post Conditions: none
//Return: The are in an integer

 double area(double a, double b, int n){
    	double x=a;
    	double w=((b-a)/n);
	double total=0;
	double areas;
    	while(x<b){
		areas=w*f(x);
		total=areas+total;
		x=w+x;
	}
	return total;
}


int main(){
	cout<<"What is the starting point: ";
	int a;
	cin >> a;
	cout<<"What is the ending point: ";
	int b;
	cin >> b;
	cout<<"How many rectanlges would you like to use: ";
	int n;
	cin >> n;
	
	
	double total=area(a,b,n);
	cout<<"The area is: "<<total<<endl;
	
	
return 0;
}
