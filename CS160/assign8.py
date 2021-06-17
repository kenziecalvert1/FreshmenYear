#Function def: Draws letters from user input
#Name: Assign8
#Description: Takes user input and draws the letters the user input
#Parameters: for, while, and if
#Preconditions:none
#Postconditions:none
#Return: draws letter
import turtle
window=turtle.Screen()
my_turtle=turtle.Turtle()

def main():
	user=input(str("Please enter a letter(s) up to six characters(L,W,T,I,O,V): "));
	
	for q in user:
		if(q!="L" and  q!="l"  and q!="W" and  q!="w"  and q!="T" and  q!="t" and  q!="I" and  q!="i"  and  q!="O" and  q!="o" and  q!="V" and  q!="v"):
			print("Please Enter a letter that is accepted");

	for c in user:
		if(c=="L" or c=="l"):
			turtle.right(90);
			turtle.forward(100);
			turtle.left(90);
			turtle.forward(100);
		if(c=="W" or c=="w"):
			turtle.right(90);
			turtle.forward(100);
			turtle.left(130);
			turtle.forward(50);
			turtle.right(130);
			turtle.forward(50);
			turtle.left(130);
			turtle.forward(100);
		if(c=="T" or c=="t"):
			turtle.left(90);
			turtle.forward(100);
			turtle.left(90);
			turtle.forward(50);
			turtle.left(180);
			turtle.forward(100);
		if(c=="I" or c== "i"):
			turtle.forward(50);
			turtle.right(180);
			turtle.forward(100);
			turtle.left(180);
			turtle.forward(50);
			turtle.left(90);
			turtle.forward(100);
			turtle.left(90);
			turtle.forward(50);
			turtle.left(180);
			turtle.forward(100);
		if(c=="O" or c=="o"):
			turtle.circle(100);
		if(c=="V" or c=="v"):
			turtle.right(90);
			turtle.forward(100);
			turtle.left(150);
			turtle.forward(100);
main();
my_turtle.hideturtle();
window.mainloop()
