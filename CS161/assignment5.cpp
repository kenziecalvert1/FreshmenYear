/*
 * Program:assignment5.cpp
 * Author:McKenzie Calvert
 * Date:3/5/2/17
 * Description:you bowl with arrays
 * Input:The user enters in an int of what 
 * Output:The game and kinda graphics
 */
#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include<string>

using namespace std;
/*
 * Function:start info 
 * Description:gets player num and name
 * Parameters:player num
 * Pre Conditions:none
 * Post Conditions:none
 * Return:int and string
 */

char **  start_info(int &playernum){
   char ** names;
   cout<<"Please enter in how many players are playing(1-5): ";
   cin>>playernum;
   if(playernum>5){
   	cout<<"That was incorrect input please try again"<<endl;
   }
   names=new char*[playernum];
   for(int i=0; i<playernum;i++){
      	names[i]=new char[10];
      	cout<<"Please enter in name for player "<<i+1<<": ";
	cin>>names[i];
   }
   return names;
}
/*
 * Function:print info
 * Description:frints the skeleton
 * Parameters:name and frames and playernum
 * Pre Conditions:none
 * Post Conditions:none
 * Return:the kinda graphics
 */
void print_info(char**names,int** balls,  int* frames, int playernum){
	cout<<"Name      | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10  | Total"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
	for(int i=0;i<playernum;i++){
	   cout<<("%-10s", names[i]);
	   cout<<"  |";
	   //This is for the first 9 frames
	   for(int j=0;j<=10;j+=2){
	   	cout<<" "<<balls[i][j*2]<< " "<<balls[i][j*2+1]<<" |";
	   }
	   for(int j=0;j<11;j+=2){
	   	cout<<" "<<balls[i][j*2]<<" "<<balls[i][j *2+1]<<" | ";
	   }
	   for(int j=0;j<11;j++){
	   	cout<<" "<<frames[j]<<" ";
	   }
	   //This is for the 10th frame since he is special
	   cout<<" "<<balls[i][18]<< " "<<balls[i][19]<<" "<<balls[i][20]<<" | "<<balls[i][21]<<endl;;
	}
	cout<<endl;
}
/*
 * Function:bowl the damn ball
 * Description:this is where the random numbers come from she is magic
 * Parameters:player num and previous bowl
 * Pre Conditions:none
 * Post Conditions:idk
 * Return:numbers and strings
 */
int bowl_ball(int playernum, int previous_bowl){
	int ball_bowled= rand()% (11-previous_bowl);
	cout<<"Player "<<playernum+1<<" you bowled a "<< ball_bowled<<endl;
	return ball_bowled;
}

/*
 * Function:in it this controls the game once you are inside it
 * Description:makes it so the player actually bowls
 * Parameters:playernum,names,balls bowled, first ball and 
 * Pre Conditions:idk what htis means
 * Post Conditions:cool
 * Return:goes back to main but it holds values
 */
void init(int &playernum,char ** &names, int ** &balls_bowled, int ** &frames){
   	names= start_info(playernum);
	frames= new int*[playernum];
	balls_bowled=new int*[playernum];
	for(int i=0;i<playernum;i++){
		frames[i]= new int[10];
		balls_bowled[i]=new int[21];
		for(int j=0;j<21;j++){
			balls_bowled[i][j]=0;
		}
		for(int j=0;j<21;j++){
			frames[i][j]=0;
		}
	}
}
/*
 * Function:this does the scores and checks if there was a strike
 * Description:she takes the previous score and sees if it was a strike
 * Parameters:idk
 * Pre Conditions:none
 * Post Conditions:does numbers
 * Return:int
 */
void update_score_1(int* player_frames,int cur_frame,int new_bowl){
	if(cur_frame==0){
		player_frames[cur_frame]-0;
	}
	if(cur_frame>0){
		player_frames[cur_frame]=player_frames[cur_frame-1];
	}
	player_frames[cur_frame]+=new_bowl;
	
}
/*
 * Function:update score do you have eyes
 * Description:she deals with all the numbers and such
 * Parameters:idk
 * Pre Conditions:she is pretty cool
 * Post Conditions:winner winner 
 * Return:chicken dinner
 */
void update_score_2(int* player_frames,int cur_frame,int new_bowl){
	//this is normal score
	player_frames[cur_frame]+=new_bowl;
}
/*
 * Function:this is mother main
 * Description:she controls everything
 * Parameters:idk
 * Pre Conditions:none this starts the program
 * Post Conditions:it finishes the game
 * Return:the whole game
 */
int main(){
   int playernum;
   char ** names;
   int ** frames;
   int **balls_bowled;
   int new_bowl_bowled;
   init(playernum,names,balls_bowled,frames);
   for(int cur_frame=0; cur_frame<10;cur_frame++){
   	for(int player=0;player<playernum;player++){
		cout<<"Player "<<player+1<<" please press enter to see what you bowled"<<endl; 
		new_bowl_bowled=bowl_ball(player,0);
		balls_bowled[player][cur_frame*2]=new_bowl_bowled;
		update_score_1(frames[player],cur_frame,new_bowl_bowled);
		cout<<" Player "<<player+1<<" please press enter to see what you bowled"<<endl;
		print_info(names,balls_bowled,frames[player],playernum);
		new_bowl_bowled=bowl_ball(player,balls_bowled[player][cur_frame*2]);
		balls_bowled[player][cur_frame*2+1]=new_bowl_bowled;
		update_score_2(frames[player],cur_frame,new_bowl_bowled);
		cout<<"score for the frame  "<<cur_frame<<" is "<<frames[player][cur_frame]<<endl;
	}
   }
   
   return 0;

}
