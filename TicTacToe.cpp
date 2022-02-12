#include <iostream>
using namespace std

int CreateBoard(){
	char TicTacBoard[3][3];
	for(int i = 0; i <3; i++){
		for(int j = 0; j < 3; j++){
			TicTacBoard[i][j] = '-';
		}
	}

}
int main(){
	char board[][] = CreateBoard();
}
