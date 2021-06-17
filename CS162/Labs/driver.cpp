#include<iostream>
#include<cmath>
#include<string.h>
#include<cstdlib>
#include"webpage.h"

using namespace std;

int main(){
	ifstream input_file;
	ofstream output_file;
	input_file.open("input.txt");
	output_file.open("/nfs/stak/students/c/calvertm/public_html/index.html");

	char temp[256];
	while(!input_file.eof()){
		input_file.getline(temp, 256);
		output_file<< temp<< endl;
	}
	input_file.close();
	output_file.close();
	return 0;
}
