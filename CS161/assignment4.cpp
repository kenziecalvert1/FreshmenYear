/*
 * Program: assignment4.cpp
 * Author:McKenzie Calvert
 * Date: 2/26/17
 * Input:String and integers
 * Output:A variety of strings, booleans and integers
 */
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
/*
 * Function:start_input
 * Description:this takes in the players in the game and how many rounds they would like to play
 * Parameters:Only can take in ints
 * Pre conditions:none
 * Post conditions:none
 * return:a string with user input
 */
int start_input(int &player_amount,int &rounds){
	cout<<"Please enter in how many players you would like to play (1-3): ";
	cin>>player_amount;
	cout<<"How many rounds would you like to play to win(1or2): ";
	cin>>rounds;
}
 
/*
 * Function:get_string
 * Description:takes in the secret message
 * Parameters:only takes in a string
 * Pre conditions:none
 * Post conditions:has to have a string entered in
 * return:a string with users input
 */
void get_string(string* string1){
	cout<<"Please enter in your secret message: ";
	cin.ignore();
	getline(cin,*string1);
}

/*
 * Function:set_replace_string
 * Description:takes the secret message and replaces it with dashes
 * Parameters:none
 * Pre conditions:none
 * Post conditions:none
 * return:a blank statement with only dashes
 */
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
/*
 * Function:get_search_replace
 * Description:lets the user guess what letters are in the seceret message
 * Parameters:only takes in a char
 * Pre conditions:must be called 
 * Post conditions:none
 * return:dashes and possibbly a few chars within the dashes
 */
int get_search_replace(string string1, string& string2){
	char guess;
	cout<<"Please enter in your guess: ";
	cin>>guess;
	int totalchar=0;
	int x=string2.length();
	for(int i=0; i<x;i++){
		if(guess==string1.at(i)){
			string2.at(i)=guess;
			totalchar++;
		}
	}
	cout<<"There was "<<totalchar<<" "<<guess<<endl;
	return totalchar;
}

/*
 * Function:
 * Description:
 * Parameters:
 * Pre conditions:
 * Post conditions:
 * return:
 */
int bank(int moneywon,int i,int &player1money,int &player2money,int &player3money,int bankrupt){
	if(i==1){
		if(bankrupt==0){
			player1money=0;
		}
		player1money+=moneywon;
	}
	if(i==2){
		if(bankrupt==0){
			player2money=0;
		}
		player2money+=moneywon;
	}
	if(i==3){
		if(bankrupt==0){
			player3money=0;
		}
		player3money+=moneywon;
	}
}
/*
 * Function:turn
 * Description:takes each player  and calls game 
 * Parameters:bank,player amount,string1, string2, winner
 * Pre conditions:none
 * Post conditions:a lot
 * return:who the winner is
 */
int turn(int bank,int player_amount, string string1, string &string2,bool &winner){
	for(int i=1;i<=player_amount;i++){
		winner=game(i,bank,string1,string2);
		if(winner==true){
			cout<<"Player "<<i<<" won with $"<<bank<<endl;
		}
	}
}
/*
 * Function:spin
 * Description:outputs what the user landed on
 * Parameters:string1, string2, turn, player1money, player2money,player3money,moneywon
 * Pre conditions:must be called in turn
 * Post conditions:idk
 * return:return how much the user won and if they got a char in the secret message
 */
bool spin(string string1, string &string2,int &turn,int &player1money, int &player2money,int &player3money,bool &moneywon){
	srand(time(NULL));
	int random=rand()%22;
	if(random==0){
		cout<<"You landed on "<<random<<" you are now bankrupt and end your turn"<<endl;
		moneywon=0;
		moneywon-moneywon=0;
	}else if(random==21){
		cout<<"You landed on "<<random<<" you lost your turn"<<endl;
	}else{
	   	cout<<"You landed on "<<random<<" tile"<<endl;cout<<"you got $ "<<random<<endl;
		int moneywon;
		cout<<"You got $"<<random<<endl;	
		int totalchar=get_search_replace(string1,string2);
		cout<<string2<<endl;
		moneywon=random*totalchar;
		bank(moneywon,turn,player1money,player2money,player3money);
		if(totalchar==0){
			return false;
		}
	}
}
/*
 * Function:game
 * Description:lets the user pick from a list of three
 * Parameters:must be called in turn
 * Pre conditions:idk
 * Post conditions:something right
 * return:a true or false
 */

bool game(string string1,string &string2,int &moneywon ){
	bool running=true;	
	int user_input;
	string guess;
	while(running){
		cout<<"Player "<<turn<<" 's turn"<<endl;
		cout<<"Do you want to spin(1), solve the puzzle(2),or buy vowel for $10(3): ";
		cin>>user_input;
		if(user_input==1){
			running=spin(string1,string2,turn);
		}else if(user_input==2){
			if(guess==string1){
			   return false;
			}
		}else if(user_input==3){
			if(bank>=10){
				moneywon= -10;
				get_search_replace(string1,string2);
			}
		}
	}	
	cout << "OUT!" << endl;
	return true;
}
/*
 * Function:good ole main
 * Description:controls the whole program
 * Parameters:none
 * Pre conditions:none this starts the game
 * Post conditions:none
 * return:who the winner is
 */

int main(){
   	//Variable Declaring
   	int player_amount;
	int rounds;
	int moneywon;
	start_input(player_amount,rounds);//Gets the amount of players/rounds
	bool winner=false;//Start this out as false
	string string1,string2;
	for(int i=0;i<rounds && !=winner;i++){
		get_string(&string1);
		set_replace_string(string1, &string2);
		cout<<"The message is: "<<string2<<endl;
		 winner= turn(player_amount,string1, string2,moneywon,turn);	
		
	}
	return 0;
	
}
