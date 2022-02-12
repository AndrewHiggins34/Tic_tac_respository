#include <iostream>
using namespace std

char CreateBoard(){
	char TicTacBoard[3][3];
	for(int i = 0; i <3; i++){
		for(int j = 0; j < 3; j++){
			TicTacBoard[i][j] = '-';
		}
	}

}
void DisplayBoard(board* b){
for(int i = 0;i<3;i++){
	for(int j=0; j<3;j++){
		cout << b[i][j] << " ";
	}	
	cout << endl;
}
}

int main(){
	char board[][] = CreateBoard();
}
