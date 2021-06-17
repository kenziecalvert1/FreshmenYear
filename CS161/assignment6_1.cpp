/*
 * Program: Assignment6_1.cpp
 * Author:McKenzie Calvert
 * Date: 3/19/17
 * Description: mad libs arent even fun
 * Input:Only an int 
 * Output:a series of strings
 */
#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<time.h>
#define SIZE 25
using namespace std;
/*
 * Function: counting noun
 * Description:counts how many noun words there are
 * Parameters: complete array, inoun, nouns
 * Pre-Conditions:complete array is full
 * Post-Conditions: this is now going to sort nouns
 * Return: something 
 */
void counting_noun(char** &complete_array,int &inoun,int &inouns){ 	//This counts how many singular nouns and plural nouns there are
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
/*
 * Function:sort noun
 * Description: puts the singular and plural nouns into their arrays amd deep copies them
 * Parameters:complete array, noun, nouns
 * Pre-Conditions:counting noun is done
 * Post-Conditions: now time to call the story
 * Return: the arrays for noun and nouns
 */

void sort_noun(char** &complete_array, char** &noun,char** &nouns){	
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

/*
 * Function: counting verbs
 * Description:counts how many verbs there are 
 * Parameters:complete array, iverb, iverbing
 * Pre-Conditions: that counting nouns is done
 * Post-Conditions: time to sort how many verb and verbing there are
 * Return: a number
 */
void counting_verb(char** &complete_array,int &iverb,int &iverbing){	//This counts how many verbs there are with ing and without
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

/*
 * Function:sort verb
 * Description:sorts how many verbs are ing and not
 * Parameters: complete array, verb, verbing
 * Pre-Conditions:has taken the number of how many verbs there are
 * Post-Conditions: has the verbs in arrays that can now be used in the story
 * Return:the two arrays for verb and verbing
 */
void sort_verb(char** &complete_array, char** &verb,char** &verbing){	
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

/*
 * Function:counting adjectives
 * Description:counts how many adjectives there are like the name says
 * Parameters:complete array, iadjective
 * Pre-Conditions:counting the verbs and nouns is done
 * Post-Conditions: it has a number
 * Return:an int of how many adjectives there are
 */
void counting_adjective(char** &complete_array,int &iadjective){	
   	for(int i=0;i<25;i++){
		if(complete_array[i][0]=='a'&& complete_array[i][1]=='d'&& complete_array[i][2]=='j'&& complete_array[i][3]=='e' && complete_array[i][4]=='c' && complete_array[i][5]=='t' && complete_array[i][6]=='i' && complete_array[i][7]=='v' && complete_array[i][8]=='e'){
			iadjective++;
		}			
	}
}
/*
 * Function:sort adjectives
 * Description: makes the array for the adjectives
 * Parameters:complete array, adjective
 * Pre-Conditions:counting has been done
 * Post-Conditions:time to do the story
 * Return:the array for adjectives
 */

void sort_adjective(char** &complete_array, char** &adjective){
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
 * Function:story1
 * Description:this is the story
 * Parameters:everything
 * Pre-Conditions:the counting has been done and the arrays have been done
 * Post-Conditions:this is now done
 * Return:the text
 */
void story1(int inoun,int inouns, int iverb, int iverbing, int iadjective, char** &noun, char** &nouns, char** &verb, char** &verbing, char** &adjective){
	cout<<"Most doctors agree that bicycle "<<verbing[rand() % iverbing]<<" is a "<<adjective[rand() % iadjective]<<" form of exercise. "<<verbing[rand() % iverbing]<<" a bicycle enables you to develop you "<<noun[rand() % inoun]<<" muscles, as well as increase the rate of your "<<noun[rand() % inoun]<<" beat. More "<<nouns[rand() % inouns]<<" around the world "<<verb[rand() % iverb]<<" bicycles than drive "<<nouns[rand() % inouns]<<". No matter what kind of "<<noun[rand() % inoun]<<" you "<<verb[rand() % iverb]<<", always be sure to wear a "<<adjective[rand() % iadjective]<<" helmet. Make sure to have "<<adjective[rand() % iadjective]<<" reflectors too!"<<endl;
}

/*
 * Function:story2
 * Description:this is the story
 * Parameters:everything
 * Pre-Conditions:the counting has been done and the arrays have been done
 * Post-Conditions:this is now done
 * Return:the text
 */
void story2(int inoun,int inouns, int iverb, int iverbing, int iadjective, char** &noun, char** &nouns, char** &verb, char** &verbing, char** &adjective){
	cout<<"Yesterday, "<<noun[rand() % inoun]<<" and I went to the park. On our way to the "<<adjective[rand() % iadjective]<<" park,we saw a"<<adjective[rand() % iadjective]<<" "<<noun[rand() % inoun]<<" on a bike. We also saw big "<<adjective[rand() % iadjective]<<" ballons tied to a "<<noun[rand() % inoun]<<". Once we got to the "<<adjective[rand () % iadjective]<<" park, the sky turned "<<adjective[rand() % iadjective]<<". It started to "<<verb[rand() % iverb]<<" and "<<verb[rand() % iverb]<<". "<<noun[rand() % inoun]<<" and I "<<verb[rand() % iverb]<<" all the way home. Tomorrow we will try to go to the "<<adjective[rand() % iadjective]<<" park again and hope it doesn't "<<verb[rand() % iverb]<<endl;
}

/*
 * Function:story3
 * Description:this is the story
 * Parameters:everything
 * Pre-Conditions:the counting has been done and the arrays have been done
 * Post-Conditions:this is now done
 * Return:the text
 */
void story3(int inoun,int inouns, int iverb, int iverbing, int iadjective, char** &noun, char** &nouns, char** &verb, char** &verbing, char** &adjective){
	cout<<"Spring break 2017, oh how I have been waiting for you! Spring break is when you go to some "<<adjective[rand() % iadjective]<<" place to spend time with "<<noun[rand() % inoun]<<". Getting to "<<noun[rand() % inoun]<<" is going to take "<<adjective[rand() % iadjective]<<" hours. My favorite part of spring break is "<<verbing[rand() % iverbing]<<" in the "<<noun[rand() % inoun]<<". During spring break, "<<noun[rand() % inoun]<<" and I plan to "<<verb[rand() % iverb]<<" all the way to "<<noun[rand() % inoun]<<". After spring break, I will be ready to return to "<<noun[rand() % inoun]<<" and "<<verb[rand() % iverb]<<" hard to finish "<<noun[rand() % inoun]<<". Thanks spring break 2017!"<<endl;
}

/*
 * Function:fill array
 * Description:this makes the array dynamic
 * Parameters:complete array
 * Pre-Conditions:reading the file
 * Post-Conditions:the complete array is now correct
 * Return:the correct array
 */
void fill_array(char** complete_array){
   	char temp_array[30];
	int i=0;
   	while(!cin.eof()){
	   	cin.getline(temp_array,30);
		complete_array[i]=new char[strlen(temp_array)];
		for(int x=0;x<strlen(temp_array);x++){
			complete_array[i][x]=temp_array[x];
		}
		i++;
	}

}

/*
 * Function:clear mem
 * Description: clears the memory becuase leaks are bad
 * Parameters:any array and their number of rows
 * Pre-Conditions:everything
 * Post-Conditions: its all clean
 * Return:none
 */

void clear_mem(char** &array, int num_rows){
	for(int i=0;i<num_rows;i++){
		delete [] array[i];
	}
	delete [] array;
}

/*
 * Function:Mother main
 * Description:does everything
 * Parameters:none
 * Pre-Conditions:none
 * Post-Conditions:none
 * Return:the story kinda
 */
int main(int argc, char* argv[]){
	
	srand(time(NULL));
   	//THis is the numbers for the amount of each to randomize
   	int inoun=0;
	int inouns=0;
	int iverb=0;
	int iverbing=0;
	int iadjective=0;
	
	//THis is where I deal with the complete array
	char** complete_array= new char*[75];
	fill_array(complete_array);
	
	//This isn't shown on the screen but this calls all the counting functions
	counting_noun(complete_array,inoun,inouns); 
	counting_verb(complete_array,iverb,iverbing);
	counting_adjective(complete_array,iadjective);
	
	//This makes each array to the exact amount of words there are
   	char** nouns=new char *[inouns];	
	char** noun=new char *[inoun];	
	char** verb= new char *[iverb];	
	char** verbing=new char *[iverbing];	
	char** adjective=new char *[iadjective];	

	//This is where I sort the words into their proper array
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
	
	//THis clears the memory
	clear_mem(nouns,inouns);clear_mem(noun,inoun); clear_mem(verb, iverb); clear_mem(verbing,iverbing); clear_mem(adjective, iadjective); clear_mem(complete_array, 75);
	return 0;
}
