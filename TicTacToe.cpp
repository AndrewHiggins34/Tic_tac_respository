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

void DisplayBoard(char** board) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
}


int main(){
	char** board = CreateBoard();
	DisplayBoard(board);
}
