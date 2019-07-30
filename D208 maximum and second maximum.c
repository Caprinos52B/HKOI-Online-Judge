#include<stdio.h>

void ins(int d[],int size){
	int i,j,temp=0;
	for(i=1;i<size;i++){
		j=i-1;
		temp=d[i];
		while(temp<d[j]&&j>=0){
			d[j+1]=d[j];
			j--;			
		}
		d[j+1]=temp;
	}
	return;
}

int main(){
	int n,i,d[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&d[i]);
	ins(d,n);
	printf("%d\n%d",d[n-1],d[n-2]);
	return 0;	
}
