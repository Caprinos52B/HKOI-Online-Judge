#include<stdio.h>

int main(){
	int n, i;
	do{
		scanf("%d", &n);
		}while(n < 2 && n> 9);
	for(i = 1;i <= 100;i++){
		if(i % 10 == 0){
			if(i % n == 0||i % 10 == n||i / 10 == n){
				printf("Clap\n");
			}
			else{
				printf("%d\n", i);
			}	
		}
		else{
			if(i % n == 0||i % 10 == n||i / 10 == n){
				printf("Clap ");
			}
			else{
				printf("%d ", i);
		
			}	
		}	
	}
	return 0;
}


