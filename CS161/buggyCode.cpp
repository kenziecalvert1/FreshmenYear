#include<iostream>

using namespace std;

int main(){

	int x=3;
	int y;
	cout << "Please input a number: ";
	cin>> y;
	bool again = true;
	while(again==true){
		if(x > y){
			cout << "X is greater than Y"<<endl;
			cout <<" would you like to input another number?: " << endl;
			cin >> again;
				if(again==false){
					break;
				}
		}else{
			cout << "X is less than Y" << endl;
			cout << "would you like to input another number?(0-no 1-yes)" << endl;
			cin >> again;
				if (again==false){
					break;
				}
		}
	}
	
	int kenzie =1;
	while(kenzie<2){
		int num;
		//cin>>num;
		cout<<"What number would you like to find the factorial for?(1-10): ";	
		int z=1;
		cin>>num;
		//int num;
		//cin>>num;
		for(int x=num;x>0;x--){
			z=x*z;
		// 	return z;  
		}
		cout<<"The factorial for "<<num<<" is "<<z<<endl;
	
	kenzie=kenzie+5;
	}	
	
	
	
	cout << "Are you enjoying cs161? (y or n) ";
		char myanswer;
		cin >> myanswer;
		if(myanswer == y){
			cout << "YAY" << endl;
		}else{
			cout << "YOU WILL SOON!" << endl;
		}
return 0;
}

