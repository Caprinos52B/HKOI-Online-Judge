#include<stdio.h>

int summf0(int x){
	if(x<=1) return 1;
	else return x+summf0(x-1);
}

int main(){
	int i,n,h,j;
	scanf("%d",&n);
	for(i=n;i>0;i--){
		if(i==1)
			for(j=n;j>0;j--)
				printf("%d ",j);
		else{
			for(h=n,j=n*summf0(i);h>0;j-=i,h--)
				printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
