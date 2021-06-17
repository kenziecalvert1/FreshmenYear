#include<iostream>
using namespace std;

void get_string(string* string1){
 
	cout<<"Please enter a string: ";
	getline(cin,*string1);
}

void set_replace_string(string string1,string* string2){
	int x=string1.length();
	for(int i=0;i<x;i++){
		if(string1.at(i)!=' ' && string1.at(i) !='-'){
			*string2 += '-';
		}else{
			*string2 += string1.at(i);
		}
	}

}

int get_search_replace(string string1, string& string2){
	char user;	
	cout<<"Please enter a character you would like to know how many times it appears in your previous string: ";
	cin>>user;
	int totalchar=0;
	int x=string2.length();
	for(int i=0; i<x;i++){
		if(user==string1.at(i)){
			string2.at(i)=user;
			totalchar++;
		}
	}
	return totalchar;
}



 int main(){
    	string string1;
	string string2;
 	get_string(&string1);
 	cout << string1 << endl;
	set_replace_string(string1,&string2);
 	cout << string2 << endl;
	int totalchar=	get_search_replace(string1,string2);
	cout<<totalchar<<endl;
	cout<<string2<<endl;

	return 0;
 }
