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

void PlaceMarker(int i, int j, char** board char choice){
	board[i][j] = choice;
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
	cout << i << endl;
}
