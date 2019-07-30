#include<stdio.h>

int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==1)
			printf("1");
		else{
			for(j=i+(i-1)*(i-2);j>=1;j-=(i-1))
				printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
