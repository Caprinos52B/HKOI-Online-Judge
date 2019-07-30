#include<stdio.h>

int main(){
	char letter;
	do{
		letter = getchar();
		if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122) || (letter == 32 || letter == '\n')){
			printf("%c", letter);
		}
	}while(letter != EOF);
	return 0;
}
