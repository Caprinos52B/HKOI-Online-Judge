#include<stdio.h>
#include<string.h>
int count=0;

void input(int c,int d[]){
	int i;
	for(i=0;i<c;i++)
		scanf("%d",&d[i]);
	return;
}

int ascbubb(int n,int d[]){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			temp=d[j];
			while(temp>d[j+1]){
				d[j]=d[j+1];
				d[j+1]=temp;
				count++;
				
			}
		}
	}
	return count;
}

int dscbubb(int n,int d[]){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(d[j]<d[j+1]){
				temp=d[j];
				while(temp<d[j+1]){
					d[j]=d[j+1];
					d[j+1]=temp;
					count++;
				}
			}
		}
	}
	return count;
}

void printarr(int x,int d[]){
	int i;
	printf("%d\n",count);
	for(i=0;i<x;i++)
		printf("%d ",d[i]);
	return;
}

int main(){
	int length,order,d[2000];
	scanf("%d%d",&length,&order);
	input(length,d);
	if(order==0)
		ascbubb(length,d);
	else
		dscbubb(length,d);
	printarr(length,d);
	return 0;
}
