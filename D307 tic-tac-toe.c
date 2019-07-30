#include<stdio.h>

int main(){
	int i,j,dotflg=0;
	char board[4][4];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%c",&board[i][j]);
			if(board[i][j]=='.')
				dotflg++;
		}
		board[i][3]='\0';
	}
	if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]=='O' || board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][0]=='O' || board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][0]=='O' || board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]=='O' || board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[0][1]=='O' || board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[0][2]=='O' || board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]=='O' || board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]=='O')
		printf("O wins");
	else if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]=='X' || board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][0]=='X' || board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][0]=='X' || board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]=='X' || board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[0][1]=='X' || board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[0][2]=='X' || board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]=='X' || board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]=='X')
		printf("X wins");
	else if(dotflg==0)
		printf("Draw");
	else
		printf("Not ended");
	return 0;
}
