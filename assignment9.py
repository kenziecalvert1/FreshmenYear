#Description:Makes the blank board
#Parameters:makes the blank board and starting place
#precondition:none
#Postcondition:none
#Return: blank board
def print_board(board):
	print(board[0]+ " | " +board[1]+ " | "+board[2]);
	print("----------");
	print(board[3]+" | "+board[4]+" | "+board[5]);
	print("----------");
	print(board[6]+" | "+board[7]+" | "+board[8]);	
#Description:Takes in user letter input
#Parameters:asks user what letter they want to be and out puts it
#Precont:none
#postcont:none
#Return:prints off each players letter
def choose_piece():
	player2=''
	player1=input("What character would you like to be X or O: ");
	if(player1=="X"):
		player2="O";
	else:
		player2="X"
	print("Player 1 your piece is: " +player1);
	print("Player 2 your piece is: " +player2);
	return (player1,player2);
#Description:asks user where they want their character
#Parameters: takes in ints and applies them to the board
#precont:none
#postcont:none
#return:where the user wants to play thier piece		
def play_one_piece():
	move=int(input("Where would you like to put your piece? (1-9): "));
	return move
	
#Description:Checks to see if the place the player entered is clear
#Parameters:just checks the board
#precont:none
#postcont:none
#return: nothing for the user to see
def is_location_clear(board,move):
	if board[move]=="-":
		return True
	else:
		return False	
#Description:Sees if there is a user on the board
#Parameters:checks board to see if there is a winner
#precont:none
#postcont:none
#Return: nothing for user to see	
def  winner(board):
	if((board[0]==board[1]) and (board[1]==board[2])):
		return True;

	elif((board[3]==board[4]) and (board[4]==board[5])):
		return True;
	elif((board[6]==board[7]) and (board[7]==board[8])):
		return True;
	elif((board[0]==board[3]) and (board[3]==board[6])):
		return True;
	elif((board[1]==board[4]) and (board[4]==board[7])):
		return True;
	elif((board[2]==board[5]) and (board[5]==board[8])):
		return True;
	elif((board[0]==board[4]) and (board[4]==board[8])):
		return True;
	elif((board[2]==board[4]) and (board[4]==board[6])):
		return True;
	else:
		return False;


#Description:its the mother of this thing
#Parameters: it honestly takes in everything
#precont:none
#postcont:none
#Return: will print the board with user input,and prints who won and  			
def main():
	player1_turn=True;
	game_not_won=True;
	counter=0	
	board =['-','-','-','-','-','-','-','-','-','-'];
	board_dummy=['A','B','C','D','E','F','G','H','I'];
	print_board(board);
	(player1_piece,player2_piece)= choose_piece();

	while(game_not_won==True):
		counter=counter+1;	
		move=play_one_piece();
		legal_move= is_location_clear(board,move)
		if player1_turn==True:
			board[move-1]=player1_piece
			board_dummy[move-1]=player1_piece
			player1_turn=False;
		else:
			board[move-1]=player2_piece
			board_dummy[move-1]=player2_piece
			player1_turn=True;
		print_board(board);
		return_value=winner(board_dummy);
		if return_value==True and player1_turn==False:
			print(str("Player 1 won!" ));
			game_not_won=False
		elif return_value==True and player1_turn==True:
			print(str("Player 2 won!"));
			game_not_won=False
		elif counter==9:
			print("No one won")
		if game_not_won==False:
			again=input(str("Do you want to play again?(Yes or no): "));
			if again=="Yes":
				game_not_won=True;
		
			
main();
