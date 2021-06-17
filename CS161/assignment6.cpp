#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<time.h>
#define SIZE 25
using namespace std;

void counting_noun(char complete_array[][30],int &inoun,int &inouns){ 	//This counts how many singular nouns and plural nouns there are
	   for(int i=0;i<25;i++){
		if(complete_array[i][0]=='n'&& complete_array[i][1]=='o'&& complete_array[i][2]=='u'&& complete_array[i][3]=='n'){
			inoun++;	
			if(complete_array[i][strlen(complete_array[i])-1]=='s'){
				inouns++;
			}
		}
	}
	inoun-=inouns;
}

void sort_noun(char complete_array[][30], char** &noun,char** &nouns){	//Make sure I have allocated memory
   	int smallarraynoun=0;
	int smallarraynouns=0;
	for(int i=0;i<25;i++){
		if(complete_array[i][0]=='n'&& complete_array[i][1]=='o'&& complete_array[i][2]=='u'&& complete_array[i][3]=='n'){
			if(complete_array[i][strlen(complete_array[i])-1]=='s'){
				nouns[smallarraynouns]=new char[strlen(complete_array[i]-5)];
				for(int x=5;x<strlen(complete_array[i]);x++){
					nouns[smallarraynouns][x-5]=complete_array[i][x];
				}
				smallarraynouns++;
			}else{
				noun[smallarraynoun]=new char[strlen(complete_array[i]-5)]; //This is for each row and the width of them
				for(int x=5;x<strlen(complete_array[i]);x++){ //This is for copying from the source
					noun[smallarraynoun][x-5]=complete_array[i][x];
				}
				smallarraynoun++;
			}
		}
	}
}

void counting_verb(char complete_array[][30],int &iverb,int &iverbing){	//This counts how many verbs there are with ing and without
	   for(int i=0;i<SIZE;i++){
		if(complete_array[i][0]=='v'&& complete_array[i][1]=='e'&& complete_array[i][2]=='r'&& complete_array[i][3]=='b'){
			iverb++;
			if(complete_array[i][strlen(complete_array[i])-1]=='g'){
				iverbing++;
			}
		}		
	}
	iverb-=iverbing;
}

void sort_verb(char complete_array[][30], char** &verb,char** &verbing){	//Make sure I have allocated memory
   	int smallarrayverb=0;
	int smallarrayverbing=0;
	for(int i=0;i<25;i++){
		if(complete_array[i][0]=='v'&& complete_array[i][1]=='e'&& complete_array[i][2]=='r'&& complete_array[i][3]=='b'){
			if(complete_array[i][strlen(complete_array[i])-1]=='g'){
			   verbing[smallarrayverbing]=new char[strlen(complete_array[i]-5)];
				for(int x=5;x<strlen(complete_array[i]);x++){
					verbing[smallarrayverbing][x-5]=complete_array[i][x];
				}
				smallarrayverbing++;
			}else{
				verb[smallarrayverb]=new char[strlen(complete_array[i]-5)]; //This is for each row and the width of them
				for(int x=5;x<strlen(complete_array[i]);x++){ //This is for copying from the source
					verb[smallarrayverb][x-5]=complete_array[i][x];
				}
				smallarrayverb++;
			}
		}
	}
}

void counting_adjective(char complete_array[][30],int &iadjective){	//This counts how many adjectives there are
   	for(int i=0;i<25;i++){
		if(complete_array[i][0]=='a'&& complete_array[i][1]=='d'&& complete_array[i][2]=='j'&& complete_array[i][3]=='e' && complete_array[i][4]=='c' && complete_array[i][5]=='t' && complete_array[i][6]=='i' && complete_array[i][7]=='v' && complete_array[i][8]=='e'){
			iadjective++;
		}			
	}
}

void sort_adjective(char complete_array[][30], char** &adjective){
	int smallarrayadjective=0;
	for(int i=0;i<25;i++){
		if(complete_array[i][0]=='a'&& complete_array[i][1]=='d'&& complete_array[i][2]=='j'&& complete_array[i][3]=='e' && complete_array[i][4]=='c' && complete_array[i][5]=='t' && complete_array[i][6]=='i' && complete_array[i][7]=='v' && complete_array[i][8]=='e'){
			adjective[smallarrayadjective]=new char[strlen(complete_array[i]-10)];
			for(int x=10;x<strlen(complete_array[i]);x++){
				adjective[smallarrayadjective][x-10]=complete_array[i][x];
			}
			smallarrayadjective++;		
		}
	}
}
/*
void print_adjective(char **&adjective, int &iadjective){
	int i=rand()%iadjective;
	cout<<"98"<<endl;
	//cout<<strlen(verbing[i])<<endl;
	cout<<adjective[0][0]<<endl;  
	cout<<"100"<<endl;
	for(int x=0;x<strlen(adjective[i]);x++){
	cout<<adjective[i][x];  
   
   }
*/



void story1(int inoun,int inouns, int iverb, int iverbing, int iadjective, char** &noun, char** &nouns, char** &verb, char** &verbing, char** &adjective){
	cout<<"Most doctors agree that bicycle "<<verbing[rand() % iverbing]<<" is a "<<adjective[rand() % iadjective]<<" form of exercise. "<<verbing[rand() % iverbing]<<" a bicycle enables you to develop you "<<noun[rand() % inoun]<<" muscles, as well as increase the rate of your "<<noun[rand() % inoun]<<" beat. More "<<nouns[rand() % inouns]<<" around the world "<<verb[rand() % iverb]<<" bicycles than drive "<<nouns[rand() % inouns]<<". No matter what kind of "<<noun[rand() % inoun]<<" you "<<verb[rand() % iverb]<<", always be sure to wear a "<<adjective[rand() % iadjective]<<" helmet. Make sure to have "<<adjective[rand() % iadjective]<<" reflectors too!"<<endl;
}

void story2(int inoun,int inouns, int iverb, int iverbing, int iadjective, char** &noun, char** &nouns, char** &verb, char** &verbing, char** &adjective){
	cout<<"Yesterday, "<<noun[rand() % inoun]<<" and I went to the park. On our way to the "<<adjective[rand() % iadjective]<<" park,we saw a"<<adjective[rand() % iadjective]<<" "<<noun[rand() % inoun]<<" on a bike. We also saw big "<<adjective[rand() % iadjective]<<" ballons tied to a "<<noun[rand() % inoun]<<". Once we got to the "<<adjective[rand () % iadjective]<<" park, the sky turned "<<adjective[rand() % iadjective]<<". It started to "<<verb[rand() % iverb]<<" and "<<verb[rand() % iverb]<<". "<<noun[rand() % inoun]<<" and I "<<verb[rand() % iverb]<<" all the way home. Tomorrow we will try to go to the "<<adjective[rand() % iadjective]<<" park again and hope it doesn't "<<verb[rand() % iverb]<<endl;
}

void story3(int inoun,int inouns, int iverb, int iverbing, int iadjective, char** &noun, char** &nouns, char** &verb, char** &verbing, char** &adjective){
	cout<<"Spring break 2017, oh how I have been waiting for you! Spring break is when you go to some "<<adjective[rand() % iadjective]<<" place to spend time with "<<noun[rand() % inoun]<<". Getting to "<<noun[rand() % inoun]<<" is going to take "<<adjective[rand() % iadjective]<<" hours. My favorite part of spring break is "<<verbing[rand() % iverbing]<<" in the "<<noun[rand() % inoun]<<". During spring break, "<<noun[rand() % inoun]<<" and I plan to "<<verb[rand() % iverb]<<" all the way to "<<noun[rand() % inoun]<<". After spring break, I will be ready to return to "<<noun[rand() % inoun]<<" and "<<verb[rand() % iverb]<<" hard to finish "<<noun[rand() % inoun]<<". Thanks spring break 2017!"<<endl;
}

int main(int argc, char* argv[]){
	
	srand(time(NULL));
   	//THis is the numbers for the amount of each to randomize
   	int inoun=0;
	int inouns=0;
	int iverb=0;
	int iverbing=0;
	int iadjective=0;
	//This is the arrays for each area
   	char** nouns=new char *[25];	
	char** noun=new char *[25];	
	char** verb= new char *[25];	
	char** verbing=new char *[25];	
	char** adjective=new char *[25];	
	
	//Declares Complete_array
	char complete_array[25][30];
	
	
	//This fills the array with this size with null characters to make sure it is clean
	for(int i=0;i<25;i++){
		memset(complete_array[i],'\0',30);
		cin.getline(complete_array[i],30);
	}
	//This isn't shown on the screen but this calls all the counting functions
	counting_noun(complete_array,inoun,inouns); 
	counting_verb(complete_array,iverb,iverbing);
	counting_adjective(complete_array,iadjective);
   	sort_noun(complete_array,noun,nouns);
	sort_verb(complete_array,verb,verbing);
	sort_adjective(complete_array,adjective);



	//This is where the user picks what story they want and deals with an error as well
	if(strcmp(argv[1], "1")==0){
		cout<<"You chose story 1!"<<endl;
	   	story1(inoun,inouns,iverb,iverbing,iadjective, noun, nouns, verb, verbing,adjective);
	}else if(strcmp(argv[1], "2")==0){
	   	cout<<"You chose story 2!"<<endl;
		story2(inoun,inouns,iverb,iverbing,iadjective,noun,nouns,verb,verbing,adjective);
	}else if(strcmp(argv[1], "3")==0){
		cout<<"You chose story 3!"<<endl;
	   	story3(inoun,inouns,iverb,iverbing,iadjective,noun,nouns,verb,verbing,adjective);
	}else{
		cout<<"Please enter correct input"<<endl;
	}
	
	return 0;
}
