#include<stdio.h>

int main(){
	int n,i,j,fw,ow;
	scanf("%d",&n);
	for(i=1,fw=0;i<=n;i++){
		fw=i*i;
		printf("%d",fw);
		for(j=1,ow=fw;j<=n-1;j++){
			ow+=+i;
			printf(" %d",ow);
		}
	printf("\n");
	}
	return 0;
}

