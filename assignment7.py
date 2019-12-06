def main():
	loop=0;
	trufalse=0;
	while(trufalse==0):
		user=input(str("Please enter a letter(s) up to six characters(L,T,C,E,H,or I): "));
		
		error=0;
		for q in user:
			if(q!="l" or q!="L" or q!="T" or q!="t" or q!="c" or  q!="C" or q!="e" or q!="E" or q!="H" or q!="h" or q!="I" or q!="i"):
				print("Error please enter a letter listed"); 



		for c in user:
			if(c=="L" or c=="l"):
				print("*");
				print("*");
				print("*");
				print("*");
				print("****");
			if(c=="T" or c=="t"):
				print("*****");	
				print("  *  ");
				print("  *  ");
				print("  *  ");
			if(c=="C" or c=="c"):
				print("*****");
				print("*");
				print("*");
				print("*");
				print("*****");
			if(c=="E" or c=="e"):
				print("*****");
				print("*");
				print("***");
				print("*");
				print("*****");
			if(c=="H" or c=="h"):
				print("*     *");
				print("*     *");
				print("*******");
				print("*     *");
				print("*     *");
			if(c=="I" or c=="i"):
				print("*******");
				print("   *   ");
				print("   *   ");
				print("   *   ");
				print("*******");


		again=input("Would you like to do this again?: ")
		if(again=="no"):
			trufalse=1;
		else:
			loop=loop+1;
		
main();
