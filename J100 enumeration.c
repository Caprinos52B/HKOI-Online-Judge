#include<stdio.h>

void init(int a[],int n){
	int i,j;
	for(i=0;i<n*n;i++){
		j=i;
		a[i]=j+1;
	}
	return;
}
int main(){
	int a[100],i,j,n,y,temp;
	scanf("%d",&n);
	init(a,n);
	for(temp=0,y=1;y<=n;y++){
		for(j=1;j<y+1;j++,temp++)
			printf("%d ",a[temp]);
		printf("\n");
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++,temp++)
			printf("%d ",a[temp]);
		printf("\n");
	}
	return 0;
}
