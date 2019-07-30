#include<stdio.h>
#include<string.h>
char id[9];
int num[6];


int main(){
	int i,n,a=0,sum=0,c=0;
	gets(id);
	n=strlen(id);
	if(id[1]>'9')
		a++;
	if(a==0){
		for(i=1;i<n;i++)
			num[i-1]=id[i]-48;
		sum=9*36+8*(id[0]-55)+7*num[0]+6*num[1]+5*num[2]+4*num[3]+3*num[4]+2*num[5];
		c=11-sum%11;
	}
	if(a==1){
		for(i=2;i<n;i++)
			num[i-2]=id[i]-48;
		sum=9*(id[0]-55)+8*(id[1]-55)+7*num[0]+6*num[1]+5*num[2]+4*num[3]+3*num[4]+2*num[5];
		c=11-sum%11;
	}
	if(c==10)
		printf("%s(A)",id);
	else if(c==11)
		printf("%s(0)",id);
	else
		printf("%s(%d)",id,c);
	return 0;
}
