/*
 * Program:Assignment3.cpp
 * Author:McKenzie Calvert
 * Date:2/5/2017
 * Description:This program calculates the users grade for tests,assignments,labs, recitations, and overall
 * Input:real numbers
 * Output:Varying on user input but will output strings along with floats or integers
 */
#include<iostream>

using namespace std;


/*
 * Function:calculate lab average
 * Description:This takes user input for calculating the users grade in labs
 * Parameters:i have no idea what these are. cool
 * Preconditions:none
 * Post conditions:none
 * Return: string and double
 */
int calculate_lab_ave(){
   	double sum;
	int how_many;
	cout<<"How many labs?: ";
	cin>> how_many;
	int point_vary;
	cout<<"Do the points vary (0-no 1-yes): ";
	cin>>point_vary;
	
	if(point_vary==1){//This calulates the points and scores if the user says the scores vary
		for(int i=1;i<=how_many;i++){
			int points;
			cout<<"Lab "<<i<<" points: ";
			cin>>points;
			int score;
			cout<<"Lab "<<i<<" score: ";
			cin>>score;
			sum=score+sum;
		}
	}else if(point_vary==0){//This calculates and prints the scores if they dont change
	   int points;
	   cout<<"Out of how many points: ";
	   cin>>points;
	   int score;
	   cout<<"What was the score: ";
	   cin>>score;
	   for(int i=1;i<=how_many;i++){
		cout<<"Lab "<<i<<" score: "<<score<<endl;
		sum=score+sum;
			
	   }
	
	}double average_lab=(sum)/(how_many);
	cout<<"Your average is: "<<average_lab<<endl;
	return average_lab;
}

/*
 * Function: test ave
 * Description:same thing i said above can' t you read
 * Parameters: still dont know what the hell this is
 * Pre:none
 * Post:none
 * Return: an int
 */
int calculate_test_ave(){
	double sum;
	int how_many;
	cout<<"How many tests: ";
	cin>>how_many;
	int point_vary;
	cout<<"Do the points vary(0-no 1-yes): ";
	cin>>point_vary;

	if(point_vary==1){
		for(int i=1;i<=how_many;i++){
			int points;
			cout<<"Test "<<i<<" points: ";
			cin>>points;		
		   	int score;
			cout<<"Test "<<i<<" score: ";
			cin>>score;
			sum=score+sum;
		}
		
	}else if(point_vary==0){//I really hate comments
		int points;
		cout<<"Out of how many points: ";
		cin>>points;//It makes the code look messy
		sum=0;
		int score;
		cout<<"What was the score: ";//Ugh I' m tired'
		cin>>score;
		for(int i=1;i<=how_many;i++){
			cout<<"Test  "<<i<<" score: "<<score<<endl;
			sum+=score;
		}
	}	double average_test= (sum)/(how_many);
		cout<<"Your average is: "<<average_test<<endl;
		return average_test;
}

/*
 * Function:recitaton ave including the different weights
 * Description: i pretty much said what it did on line 105
 * parameters: blah blah blah
 * Pre:none
 * post:none
 * return: yet another real number wow 
 */
float calculate_recitation_ave(){
	float average_recitation;
	float quiz_sum;
	float design_sum;
	float critique_sum;
	int quiz_weight;
	cout<<"What percent out of 100 are quizzes: ";
	cin>>quiz_weight;//Yeah Im not getting extra credit bc of this function 

	int design_weight;
	cout<<"What percent out of 100 are designs: ";
	cin>>design_weight;

	int critique_weight;
	cout<<"What percent out of 100 are critiques: ";
	cin>>critique_weight;

	int num_quizzes;
	cout<<"How many quizzes are there: ";
	cin>>num_quizzes;

	int num_designs;
	cout<<"How many designs are there: ";//I could use some sleep 
	cin>>num_designs;

	int num_critiques;
	cout<<"How many critiques were there: ";
	cin>>num_critiques;

	int point_vary;//My cat died today so i rather be crying not coding
	cout<<"Do the points vary (0-no 1-yes): ";
	cin>>point_vary;

	if(point_vary==1){
		for(int i=1;i<=num_quizzes;i++){
			int points;
			cout<<"Quiz "<<i<<" points: ";
			cin>>points;
			int score;
			cout<<"Quiz "<<i<<" socre: ";
			cin>>score;
			quiz_sum=score+quiz_sum;
		}
		for(int i=1;i<=num_designs;i++){
			int points;
			cout<<"Design "<<i<<" points: ";
			cin>>points;
			int score;
			cout<<"Design"<<i<<" score: ";
			cin>>score;
			design_sum=score+design_sum;
		}
		for(int i=1;i<=num_critiques;i++ ){
			int points;
			cout<<"Critique "<<i<<" points: ";
			cin>>points;
			int score;
			cout<<"Critique "<<i<<" socre: ";
			cin>>score;
			critique_sum=score+critique_sum;
		}
	}else if(point_vary==0){
		int quiz_points;
		cout<<"For quizzes, out of how many points: ";
		cin>>quiz_points;
		int quiz_score;
		cout<<"For quizzes, what was the score: ";
		cin>>quiz_score;
		for(int i=1;i<=num_quizzes;i++){
			cout<<"Quiz"<<i<<" score: "<<quiz_score<<endl;
			quiz_sum=quiz_score+quiz_sum;
		}
		int design_points;
		cout<<"For designs, out of how many points: ";
		cin>>design_points;
		int design_score;
		cout<<"For designs, what was the score: ";
		cin>>design_score;
		for(int i=1;i<=num_designs;i++){
			cout<<"Design "<<i<<" score: "<<design_score<<endl;
			design_sum=design_score+design_sum;
		}
		int critique_points;
		cout<<"For critiques, out of how many points: ";
		cin>>critique_points;
		int critique_score;
		cout<<"For critiques, what was the score: ";
		cin>>critique_score;
		for(int i=1;i<=num_critiques;i++){
			cout<<"Critique "<<i<<critique_score<<endl;
			critique_sum=critique_score+critique_sum;
		}
	}
	
//This is all the math stuff

	float quiz_average=quiz_sum/num_quizzes;
	cout<<"Your average for quizzes is: "<<quiz_average<<endl;
	float design_average=design_sum/num_designs;
	cout<<"Your average for designs is: "<<design_average<<endl;
	float critique_average=critique_sum/num_critiques;
	cout<<"Your average for critiques is: "<<critique_average<<endl;
	float weighted_quiz_average=quiz_average*(quiz_weight/100);
	float weighted_design_average=design_average*(design_weight/100);
	float weighted_critique_average=critique_average*(critique_weight/100);
	float total_grade= weighted_quiz_average+weighted_design_average+weighted_critique_average;
	cout<<"Your average for recitation is: "<<total_grade<<endl;
	return total_grade;
                                	
}
/*
 * Function:same thing just assignments
 * Description:takes user input and does stuff
 * Parameters:i need a nap
 * Prenone
 * post none
 * return some numbers yeah
 */
int calculate_assignment_ave(){
	double sum;
	int how_many;
	cout<<"How many assignments: ";
	cin>>how_many;
	int point_vary;
	cout<<"Do the points vary (0-no 1-yes): ";
	cin>>point_vary;

	if(point_vary==1){
		for(int i=1;i<=how_many;i++){
			int points;
			cout<<"Assignment "<<i<<" points ";
			cin>>points;
		   	int score;
			cout<<"Assignment "<<i<<" score: "<<endl;
			cin>>score;
			sum=score+sum;
		}
	}else if(point_vary==0){
		int points;
		cout<<"Out of how many points: ";
		cin>>points;
		int score;
		cout<<"What was the score: ";
		cin>>score;
		for(int i=1;i<=how_many;i++){
			cout<<"Assignment "<<i<<" score: "<<score<<endl;
			sum=score+sum;
		}
	
	}
	double average_assignment= (sum)/(how_many);
	cout<<"Your average is: "<<average_assignment<<endl;
	return average_assignment;
}

/*
 * Function: class ave
 * description takes all the previous stuff we entered and makes it all come together like family on holidays
 * Parameters: im out of icecream I need some more
 * Pre none
 * post none
 * return the total grade for our stupid user
 */
float calculate_class_ave(int lab_score,int test_score,float recitation_score, int assignment_score){
	int lab_weight;//This stuff has the user tell us the weights of all the stuff
	cout<<"What percent out of 100 is labs weighted: ";
	cin>>lab_weight;

	int test_weight;
	cout<<"What percent out of 100 is tests weighted: ";
	cin>>test_weight;

	int recitation_weight;
	cout<<"What percent out of 100 is recitations weighted: ";
	cin>>recitation_weight;

	int assignment_weight;
	cout<<"What percent out of 100 is assignments weighted: ";
	cin>>assignment_weight;
//Math yay
	float weighted_lab_average= lab_score*(lab_weight/100);
	float weighted_test_average=test_score*(test_weight/100);
	float weighted_recitation_average=recitation_score*(recitation_weight/100);
	float weighted_assignment_average=assignment_score*(assignment_weight/100);
	float class_score=weighted_lab_average+ weighted_test_average+ weighted_recitation_average+ weighted_assignment_average;
	return class_score;
}

/*
 * Function: main papa
 * Description: where the magic happens
 * parameters: I need to clean my room wow 
 * Pre none
 * post none
 * return the users grades becuase why not just look at canvas
 */
int main(){
   	int user_input;
	int lab_score=0;//This makes it so if the user doesnt enter in all the grades for all the different categories they will still have a number.
	int test_score=0;
	float recitation_score=0;
	int assignment_score=0;
	float class_score=0;
	do{
		cout<<"What would you like to calculate? 1-Labs 2-Test 3-Recitation 4-Assignments 5-The whole Class 0-Quit: ";
		cin>>user_input;

		if(user_input==1){
			lab_score=calculate_lab_ave();
		}else if(user_input==2){
			test_score=calculate_test_ave();
		
		}else if(user_input==3){
			recitation_score=calculate_recitation_ave();			
		}else if(user_input==4){
			assignment_score=calculate_assignment_ave();
		
		}else if(user_input==5){
			class_score=calculate_class_ave(lab_score,test_score,recitation_score,assignment_score);
			cout<<"Class score: "<<class_score<<endl;
		
		}else if(user_input==0){
			cout<<"Thanks for calculating"<<endl;
		}else{
			cout<<"Please enter a valid input"<<endl;//I forgot about error handling so here it is so I can still saveface
		}

	}while(user_input !=0 );
//This makes the function stop



return 0;
}
