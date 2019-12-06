q=0;
while(q<100):

	def f1(x):
		return((5*x**4)+(3*x**3)-(10*x)+2);
	def f2(x):
		return((x**2)-10);
	def f3(x):
		return((40*x)+5);
	def f4(x):
		return((x**3));
	def f5(x):
		return((20*x**2)+(10*x)-2);
	


	def rectangle(a,b,n,function):
		x=a;
		area=0;
		w=(b-a)/n;
		h=0;
		total=0;

		for things in range(num):
			if (function==1):
				h= f1(x);
			elif (function==2):
				h= f2(x);
			elif(function==3):
				h=f3(x);
			elif (function==4):
				h=f4(x);
			elif (function==5):
				h= f5(x);

			area= w *h;
		
			total =area;

			x= w +x;
		return total;


	def trapezoid(a,b,n,function):
		x=a;
		area=0;
		w=((b-a)/n);
		h=0;
		total=0;

		for things in range(n):
			if (function==1):
				h=f1(x);
				h2= f1(x+w);
			elif (function==2):
				h=f2(x);
				h2=f2(x+w);
			elif (function==3):
				h=f3(x);
				h2=f3(x+w);
			elif (function==4):
				h=f4(x);
				h2=f4(x+w);
			elif (function==5):
				h=f5(x);
				h2=f5(x+w);


			area=( h + h2)/2 *w;
			area=total;
		return total


	def user():
		function= int(input("What function would you like to use? (1,2,3,4,5)  "));
		a=int(input("What is the starting point?: "));
		b=int(input("What is the ending point?: "));
		num=int(input("How many rectangles or trapezoid?: "));
		shape=int(input("1-Rectangle, 2-Trapezoid, or 3-both? : "));


		if (shape==1):
			print(str("The area under " + str(function) +" between " +str(a) +" and " +str( b) +" is " + str(function)));
		elif (shape==2):
			print(str("The area under " +str(function) +" between " +str(a) +" and " +str(b) +" is " +str(function)));
		elif (shape==3):
			print(str("The area under " +str(function) +" between " +str(a) +" and " +str(b) +" is " +str(function)));
			print(str("The area under " +str(function) +" between " +str(a) +" and " +str(b) +" is " +str(function)));




	user();
	again=input("Would you like to do this agian?: ")
	if(again=="no"):
		break;
	else:
		q=q+1;

