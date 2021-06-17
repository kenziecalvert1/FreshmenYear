/*
 * Program:assignment2.cpp
 * Author:McKenzie Calvert
 * Date:1/22/17
 * Description:program is a text based adventure
 * Input:User enters in numbers
 * Output:Text varying on user input 
 */

#include <iostream>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	cout<<"Welcome to Mexico would you like to relax? Yes(1) or No(2)"<<endl;
	int x;
	cin>>x;
	if (x==1){
		cout<<"Great would you like to swim with stingrays(1) swim with dolphins(2)Swim with manatees(3) or would you like to stay ashore(4)"<<endl;
			int x;
			cin>>x;
		
			if(x==1){
				cout<<"Welcome to the small island of Cozumel. You are currently snorkeling and see a stingray would you like to follow it? Yes(1) or No(2)?"<<endl;
					int x;
					cin>>x;
					if(x==1){
						cout<<"You followed the stingray and it brought you to the lost city of Atlantis"<<endl;
					}else if(x==2){
						cout<<"Well you decided not to follow the stingray so you aren't very fun and got eaten by a shark"<<endl;
					}

		}	
			
			else if(x==2){
				cout<<"Welcome to Pureto Adventuras a little gated town.You are in the middle of downtown where you are swimming with dolphins. Would you like to swim with sealions(1) or go back to the room(2)? "<<endl;
					
					int x;
					cin>>x;
					if(x==1){
						cout<<"You are now swimming with sealions and one gave you a kiss on the cheek would you like to go on another adventure(1) or go home(2)?" <<endl;

							if(x==1){
								cout<<"You decided to go on an adventure!You are now swimming in an underground cave called a cenote that contains freshwater would you like to continue swimming(1) or go ziplining(2)? "<<endl;
									
									int x;
									cin>>x;
									if(x==1){
										cout<<"You have now swam a mile through a cenote and have found an opening above you with a ladder to climb out"<<endl;
					}				else if(x==2){
										cout<<"You have decided to go ziplining through the Mexican jungle on a 5 mile course and now have arrived at the end of the trail in a ring of fire"<<endl;

					}

				}			else if(x==2){
								cout<<"You have gone back to the room and booked a flight home because you are a no fun nelly"<<endl;
			
			}
		}		else if(x==2){
						cout<<"You wanted to go back to the room but youfound out there is karaoke at the local restaurant tonight. Are you going to sing(1) or sit in the crowd(2)"<<endl;
				}			
							
							if(x==1){
								cout<<"You decided to sing your heart out to High School Musical and met your Troy on stage"<<endl;
					}		else if(x==2){
								cout<<"You decided to sit back in the crowd and met the restaurant cat who keeps begging to eat part of the huge burrito you've been working on all night"<<endl;
					}
				}
		
		else if(x==3){
			cout<<"Welcome to Puerto Adventuras a little gated town. You are in the middle of downtown where you are swimming with manatees your favorite animal. Would you like to swim with dolphins next(1) or go back to the room(2)?"<<endl;
				int x;
				cin>>x;
				if(x==1){
					cout<<"You are swimming with dolphins and they pushed you high in the air and now you got a big kiss from one"<<endl;
				}else if(x==2){
					cout<<"You went back to your room after the manatees. Now you see a sereque(mexican rodent) by your front door would you like to feed him(1) or shew him away(2)"<<endl;
				}		
						
						if(x==1){
							cout<<"You fed the sereque a mango and now he is your friend"<<endl;
						}else if(x==2){
							cout<<"You chased the sereque away and he never comes back. How mean."<<endl;
					}

		}else if(x==4){
			cout<<"You decided to stay ashore " <<endl;
				int x;
				srand(time(NULL));
				x=rand()%5;
				
				if(x==1){
					cout<<"Welcome to Isla Mujeres where the beach is warm and the water is warmer"<<endl;

				}else if(x==0 || x==3 || x==5){
					cout<<"Welcome to Cabo San Lucas you are currently pool side with music playing and a waiter at your service"<<endl;
				}else if(x==2 || x==4){
					cout<<"Welcome to Cancun you are currently sitting by the pool listening to the waves crash"<<endl;
				}


		}			
	}else if(x==2){
		cout<<"Well go back home then"<<endl;
	}else{
		cout<<"Please enter a number listed"<<endl;
	}


return 0;
 }
