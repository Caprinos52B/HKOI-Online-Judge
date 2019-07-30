#include<stdio.h>
#include<string.h>
int v;
char x[101],y[101];

void input(){
	gets(x);
	gets(y);
	return;
}

void compare(){
	int i;
	char q[101],t[101];
	for(i=0;i<strlen(x);i++){
		if(x[i]>=65&&x[i]<=90)
			q[i]=x[i]+32;
		else
			q[i]=x[i];		
	}
	q[i]='\0';
	for(i=0;i<strlen(y);i++){
		if(y[i]>=65&&y[i]<=90)
			t[i]=y[i]+32;
		else
			t[i]=y[i];		
	}
	t[i]='\0';
	v=strcmp(q,t);
	return;
}

void print(){
	if(v==0)
		printf("Equal");
	else if(v<0)
		printf("Smaller");
	else
		printf("Greater");
	return;
}

int main(){
	input();
	compare();
	print();
	return 0;
}
