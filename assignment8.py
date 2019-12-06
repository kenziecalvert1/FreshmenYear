#Function Definition: This function will draw a star using turtle once user clicks the turtle
#Name: Assignment8
#Description: Uses turtle and stuff
#Parameters:a click from user
#Preconditions:none
#Post Conditions:none
#Return: You get a damn star because you're kinda cool

import turtle
window=turtle.Screen()
my_turtle=turtle.Turtle()

def star(x,y):
	for i in range(5):
		turtle.forward(100);
		turtle.right(145);

turtle.onclick(star);	



window.mainloop()



