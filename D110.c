#include<stdio.h>
#include<stdlib.h>

int main(){
	int x=0,k,lol;
	char pos[3],des[3];
	scanf("%s %s",pos,des);
	k=abs((des[0]-97)-(pos[0]-97));
	lol=abs((pos[1]-48)-(des[1]-48));
	if(k==0)	//vert
		x=lol;
	else if(lol==0)	//horiz
		x=k;
	else{
		do{
			k--;
			lol--;
			x++;
		}while(k>0&&lol>0);
		while(k>0){
			k--;
			x++;
		}
		while(lol>0){
			lol--;
			x++;
		}
	}
	printf("%d",x);
	return 0;
}
