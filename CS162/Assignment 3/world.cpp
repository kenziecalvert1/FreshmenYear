/******************************************************
** Program: world.cpp
** Author: McKenzie Calvert
** Date: 5/17/2017
** Description:this controls the whole world  the balrog aka baby demon
** Input:int and string
** Output:eveyrthing
******************************************************/
#include"./world.h"

/*********************************************************************
** Function: display_menu
** Description:this is the question that always asked
** Parameters:none
** Pre-Conditions:driver calls this
** Post-Conditions:none
*********************************************************************/
void display_menu(){//The initial questions the program asks you
    cout << "What would you like to do?" << endl;
    cout<<endl;
    cout << "1. View Catalog" << endl;
    cout << "2. shop for a creature"<< endl;
    cout << "3. Fight" << endl;
    cout << "4. Look at your bank account"<< endl;
    cout << "5. Look at creatures owned"<< endl;
    cout << "0. leave"<<endl;
}
/*********************************************************************
** Function: main
** Description:this deals with that is in the display_menu
** Parameters:none
** Pre-Conditions:display_menu calls this
** Post-Conditions:none
*********************************************************************/
void World::main(){//How to deal with the input from the menu function
    int start;
    do{
        display_menu();
        cin >> start;
        switch(start){
            case 1: view_catalog();
                break;
            case 2: shop();
                break;
            case 3: fight_mode();
                break;
            case 4: bank_account();
                break;
            case 5: display_creatures();
                break;
            case 0:
                break;
            default:
                cout<<"Not correct input"<<endl;
                break;
        }

    }while(start != 0);
}
/*********************************************************************
** Function:view_catalog
** Description:looks at all the creatures for sale
** Parameters:none
** Pre-Conditions:user asks to see that
** Post-Conditions:none
*********************************************************************/
void World::view_catalog(){//This just shows the user what they can buy
    cout<<"1.Elf: Strength-8 Hitpoints-15 Cost-$15"<<endl;
    cout<<"2.Human: Strength-3 Hitpoints-10 Cost-$1"<<endl;
    cout<<"3.Hobbit: Strength-5 Hitpoints-10 Cost-$5"<<endl;
    cout<<"4.Demon: Strength-8 Hitpoints-10 Cost-$10"<<endl;
    cout<<"5.Cyberdemon: Strength-8 Hitpoints-15 Cost-$15"<<endl;
    cout<<"6.Balrog: Strenth-10 Hitpoints-20 Cost-$20"<<endl;
}
/*********************************************************************
** Function: buying
** Description:this is where the user buys for creatures
** Parameters:none
** Pre-Conditions:user asks to buy stuff
** Post-Conditions:none
*********************************************************************/
void World::buying(){//Split this up from shop because of line count
    Creature **temp;
    Creature *purchase;
    int buy;
    cout<<"Please enter in the creature you would like to buy(int): ";
    cin>>buy;
    switch(buy) {//This switch statement takes the users input of what they bought and subtract how much that creature is from the balance
        case 1: balance-=15; purchase = new Elf; break;
        case 2: balance-=1; purchase=new Human; break;
        case 3:balance -=5; purchase=new Hobbit; break;
        case 4:balance -=10; purchase=new Demon; break;
        case 5: balance -=15; purchase=new Cyberdemon; break;
        case 6: balance -=20; purchase=new Balrog; break;
        default: cout<<"bad input"<<endl; break;
    }

    if(balance <=0){
        cout<<"You don't have enough money:("<<endl;
    }else{//This resizes the array of creatures to the new size
        string newname;
        cout<<"Please name your creature: ";
        cin>>newname;
        cout<<"You have $"<<balance<<" left in your account "<<endl;
        temp=new Creature*[numCreature+1];
        for(int i=0;i<(numCreature);i++){
            temp[i]=c[i];

        }
        temp[numCreature] = purchase;
        temp[numCreature]->setName(newname);
        numCreature++;
        delete [] c;
        c=temp;
    }
}
/*********************************************************************
** Function: shop
** Description:this is where the user actually buys the creature
** Parameters:none
** Pre-Conditions:user asks to shop
** Post-Conditions:none
*********************************************************************/
void World::shop(){
    //Broke up into buying to save line count and this is much easier to read
    cout<<"Your bank balance is :"<<balance<<endl;
    view_catalog();
    buying();
}
/*********************************************************************
** Function:bank_account
** Description:this shows the user how much money they have
** Parameters:none
** Pre-Conditions: user asks to see their balance
** Post-Conditions:none
*********************************************************************/
int World::bank_account(){//This just shows the user what they have in their account
    cout<<"This is how much money is in your account $"<<balance<<endl;
}
/*********************************************************************
** Function: default_world
** Description:this is what the world is like when the user starts
** Parameters:none
** Pre-Conditions:user selects default world
** Post-Conditions:none
*********************************************************************/
void World::default_world(){
    cout<<"Bank account balance: "<<balance<<endl;
    numCreature=5;
    c=new Creature*[numCreature];
    c[0]=new Elf;
    c[1]=new Cyberdemon;
    c[2]=new Human;
    c[3]=new Hobbit;
    c[4]=new Demon;

    string name;
    cout << "Default world" << endl;
    for(int i=0;i<numCreature;i++){
        cout << "Enter the name for " << c[i]->getSpecies() << ": ";
        cin >> name;
        c[i]->setName(name);
    }
}
/*********************************************************************
** Function: make_ur_own
** Description:this isnt anything
** Parameters:none
** Pre-Conditions:
** Post-Conditions:none
*********************************************************************/
void World::make_ur_own(){
    cout<<"Sorry you have to use the one I created"<<endl;
}
/*********************************************************************
** Function: display_creatures
** Description:this shows all the creatures that the user is currenlty has
** Parameters:none
** Pre-Conditions:user asks to see all the creatures it has
** Post-Conditions:none
*********************************************************************/
void World::display_creatures(){
    for(int i=0;i<numCreature;i++){
        cout<<i<<" "<<c[i]->getName()<<" "<<c[i]->getSpecies()<<endl;
    }
}
/*********************************************************************
** Function: fight mode
** Description:FIGHT CLUB!!!!!!!!!!!!!!
** Parameters:none
** Pre-Conditions:user asks to fight
** Post-Conditions:none
*********************************************************************/
void World::fight_mode(){
    Creature *p1;
    Creature *p2;
    int creature1, creature2;
    bool p1A=true, p2A=true;

    cout<<"Please select Creature 1: "<<endl;
    display_creatures();
    cin>>creature1;
    p1=c[creature1];
    do{
        cout<<"Please select Creature 2: "<<endl;
        display_creatures();
        cin>>creature2;
    }while(creature1 == creature2);
    p2=c[creature2];
    do{
        p1A = p1->takeDamage(p2->getDamage());
        p2A = p2->takeDamage(p1->getDamage());
    }while(p1A && p2A);
    if(p1A){
        cout<<"Creature 1 won! Reward $5"<<endl;
        remove_creature(creature2);
        balance+=5;
    }else if(p2A){
        cout<<"Creature 2 won! Reward $5"<<endl;
        remove_creature(creature1);
        balance+=5;
    }else{
        cout<<"Everyone died:("<<endl;
        remove_creature(creature1);
        remove_creature(creature2);
    }
}
/*********************************************************************
** Function: remove_creature
** Description:this removes the dead creatures from the array
** Parameters:none
** Pre-Conditions:the fight mode is called
** Post-Conditions:none
*********************************************************************/
void World::remove_creature(int pos){
    Creature **temp=new Creature *[numCreature--];
    int j=0;
    for(int i=0; i<=numCreature;i++){
        if(i!=pos){
            temp[j]=c[i];
            j++;
        }
    }
    delete c[pos];//This deletes the old creatures position
    delete [] c;//this deletes the old creature array
    c=temp;
    display_creatures();
}
/*********************************************************************
** Function:world constructor
** Description:this just sets the world shit to variables so it is not junk numbers
** Parameters:none
** Pre-Conditions:program is ran
** Post-Conditions:none
*********************************************************************/
World::World(){
    c=NULL;
    numCreature=0;
    balance=20;
}
/*********************************************************************
** Function: deconstructor kinda
** Description:calls empty
** Parameters:none
** Pre-Conditions:eveyrhting is ran and done
** Post-Conditions:none
*********************************************************************/
World::~World(){
    empty();
}
/*********************************************************************
** Function: real deconstructor
** Description:deletes the creature array
** Parameters:none
** Pre-Conditions:~world is ran
** Post-Conditions:none
*********************************************************************/
void World::empty(){
	if(c != NULL){
		for(int i=0;i<numCreature;i++){

			delete  c[i];
		}
    	delete [] c;
    	c= NULL;
	}
}
