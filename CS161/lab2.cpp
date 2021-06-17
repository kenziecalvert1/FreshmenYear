#include<iostream>
#include<string>

using namespace std;


int main(){
cout<<"1.Shirt Color"<<endl;
cout<<"2.Hair Color"<<endl;
cout<<"3.School year"<<endl;
cout<<"4.Code experience"<<endl;
cout<<"5.Name"<<endl;
bool guess;



do{
guess=false;
//int x;
//cin>>x;
cout<<"Please enter in a number 1-5 that corresponds with the numbered questions above: "<<endl;
	int x;
	cin>>x;
	if(x==1){
		cout<<"Shirt color is green"<<endl;
}	else if(x==2){
		cout<<"Hair color is red"<<endl;
}	else if(x==3){
		cout<<"Junior in school"<<endl;
}	else if(x==4){
		cout<<"Has no code experience"<<endl;
}	else if(x==5){
		string x;
		cin>>x;
		cout<<"Guess the name"<<endl;
			if(x=="Courtney" || x=="courtney"){
				guess=true;	
			}else{
				guess==false;
			}
		
}	else {
		cout<<"Please enter in a number 1-5"<<endl;
		
}


}while(guess==false);
	cout<<"You got it Courtney is the TA"<<endl;



return 0;
}
