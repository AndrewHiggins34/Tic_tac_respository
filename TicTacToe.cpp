#include <iostream>
using namespace std;

char** CreateBoard(){
	char TicTacBoard[3][3];
	char** board = 0;
	board = new char*[3];
	for(int i = 0; i < 3; i++) {
		board[i] = new char[3];
		for(int j = 0; j < 3; j++) {
			board[i][j] = '-';
		}
	}
	return board;
}

void PlaceMarker(int loc, char** board, char choice){
	switch(loc) {
		case 1:
			board[0][0] = choice;
			break;
		case 2:
			board[0][1] = choice;
			break;
		case 3:
			board[0][2] = choice;
			break;
		case 4: 
			board[1][0] = choice;
			break;
		case 5:
			board[1][1] = choice;
			break;
		case 6:
			board[1][2] = choice;
			break;
		case 7:
			board[2][0] = choice;
			break;
		case 8:
			board[2][1] = choice;
			break;
		case 9:
			board[2][2] = choice;
			break;
	}
}

void DisplayBoard(char** board) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}

int GetPlayerChoice() {
	bool valid = false;
	int i;
	while(valid == false) {
		cout << "Please enter an integer 1-9 (1, 2, 3: row, 4, 5, 6: middle row, 7, 8, 9: bottom row)." << endl;
		cin >> i;
		if(i > 0 && i < 10) {
			valid = true;
		}
		else {
			cout << "Invalid input. Please try again." << endl;
		}
	}
	return i;
}


int main(){
	char** board = CreateBoard();
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'X');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'O');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'X');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'O');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'X');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'O');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'X');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'O');
	DisplayBoard(board);

	int i = GetPlayerChoice();
	PlaceMarker(i, board, 'X');
	DisplayBoard(board);
}
