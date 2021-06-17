#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void get_sentence(string &s){
	cout<<"Enter: ";
	getline(cin,s);
}


int main(){
   	string s;
   	get_sentence(s);
	cout<<s<<endl;	

return 0;
}
