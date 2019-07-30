#include<stdio.h>

int main(){
	int i,j,n,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",k);
			if(j<n-1)
				k+=4;
		}
		printf("\n");
	}
	return 0;
}
