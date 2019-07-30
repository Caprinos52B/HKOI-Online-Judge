#include<stdio.h>
#include<string.h>
int win=0;
char ans[21],guess[2],k[21];

void input(){
	scanf("%s",ans);
	return ;
}

void geez(){
	int i,v;
	v=strlen(ans);
	for(i=0;i<v;i++)
		k[i]='_';
	k[v]='\0';
	do{
		scanf("%c",&guess[0]);
		scanf("%c",&guess[0]);
		for(i=0;i<v;i++){
			if(guess[0]==ans[i])
				k[i]=ans[i];
		}
		printf("%s\n",k);
		if(strcmp(k,ans)==0)
			win=1;
	}while(win!=1);
	return;
}

int main(){
	input();
	geez();
	return 0;
}
