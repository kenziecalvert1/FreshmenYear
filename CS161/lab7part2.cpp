#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

void get_string(char *string1){
	cout<<"Please enter a string: ";
	cin.getline(string1,256);
}

void set_replace_string(char* string1,char* string2){
	int x=(unsigned)strlen(string1);
	for(int i=0;i<x;i++){
		if(string1[i]!= ' ' and string1[i] !='-'){
			strcat(string2,"-");
		}else {
			strcat(string2," ");
		}
	}
}

int get_search_replace(char *string1,char *string2){
	char user;
	cout<<"Please enter a letter than you want to know how many times it appears in the statement you provided earlier: ";
	cin>>user;
	int totalchar=0;
	int x=(unsigned)strlen(string2);
	for(int i=0;i<x;i++){
		if(user==string1[i]){
			string2[i]=user;
			totalchar++;
		}
	}
	return totalchar;
}

int main(){
	char string1[256];
	char string2[256];
	get_string(string1);
	cout<<string1<<endl;
	set_replace_string(string1,string2);
	cout<<string2<<endl;
	int totalchar= get_search_replace(string1,string2);	
	cout<<totalchar<<endl;
	cout<<string2<<endl;

	return 0;
}
