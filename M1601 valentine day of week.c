#include<stdio.h>

int main(){
	int i,n,f=1;
	scanf("%d",&n);
	for(i=2000;i<n;i++){
		if((i%4==0&&i%100!=0)||i%400==0)
			f+=2;
		else
			f++;
	}
	if(f%7==1)
		printf("Monday\n");
	else if(f%7==2)
		printf("Tuesday\n");
	else if(f%7==3)
		printf("Wednesday\n");
	else if(f%7==4)
		printf("Thursday");
	else if(f%7==5)
		printf("Friday");
	else if(f%7==6)
		printf("Saturday");
	else if(f%7==0)
		printf("Sunday");
	return 0;
}
