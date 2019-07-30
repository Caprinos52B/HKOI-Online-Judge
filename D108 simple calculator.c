#include<stdio.h>
#include<string.h>

int main(){
	int sum=0,k,y,h;
	char a[1],b[1];
	scanf("%d %c %d %c %d",&k,a,&y,b,&h);
	if(a[0]==42 && b[0]==42)
		sum=k*y*h;
	else if(a[0]==42 && b[0]!=42){
		if(b[0]==43)
			sum=k*y+h;
		if(b[0]==45)
			sum=k*y-h;
	}
	else if(b[0]==42 && a[0]!=42){
		if(a[0]==43)
			sum=k+y*h;
		if(a[0]==45)
			sum=k-y*h;
	}
	else if(a[0]!=42 && b[0]!=42){
		if(a[0]==43 && b[0]==43)
			sum=k+y+h;
		if(a[0]==43 && b[0]==45)
			sum=k+y-h;
		if(a[0]==45 && b[0]==43)
			sum=k-y+h;
		if(a[0]==45 && b[0]==45)
			sum=k-y-h;
	}
	printf("%d",sum);
	return 0;
}
