#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int h=0,t=-1;

void gen(int d[],int n){
	int i;
	for(i=0;i<n;i++){
		t++;
		d[t]=i+1;
	}
	return;
}

int	kill(int d[]){
	int i,temp1=d[0],temp2=d[1];
	for(i=0;i<t-1;i++){
		if(t-1==0){
			return temp1;
			t--;
			break;
		}
		else
			d[i]=d[i+2];
	}
	t--;
	d[t]=temp1;
	return temp2;
}

int main(){
	int d[1024],n,i,v;
	scanf("%d",&n);
	gen(d,n);
	for(i=0;i<n-1;i++){
		v=kill(d);
		printf("%d ",v);
	}
	printf("\n%d",d[0]);
	return 0;
}
