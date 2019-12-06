userinput= input("Would you like scientific or binary?: ");

#while num < 0:
#	print("ERROR - Please Insert A positive number");


if(userinput=="binary"):
	number=int( input("Please enter a number: "));
	if number < 0:
		print("ERROR- Please Insert A positive number");
	n1= int(number/2);
	r1=int(number%2);
	n2=int(n1/2);
	r2=int(n1%2);
	n3=int(n2/2);
	r3=int(n2%2);
	n4=int(n3/2);
	r4=int(n3%2);
	n5=int(n4/2);
	r5=int(n4%2);
	n6=int(n5/2);
	r6=int(n5%2);
	n7=int(n6/2);
	r7=int(n6%2);
	n8=int(n7/2);
	r8=int(n7%2);
	print("Your number in Binary is {0}{1}{2}{3}{4}{5}{6}{7}". format (r8,r7,r6,r5,r4,r3,r2,r1));

elif(userinput=="scientific"):
	equation=input("Enter an equation: ");
	print(equation);

else:
	print("Error");
	
	
