#include<stdio.h>
#include<string.h>

int main(){
	char a[20],b[20],c[20],d[20],e[20];
	gets(a);
	gets(b);
	gets(c);
	gets(d);
	gets(e);
	c[0]+=32;
	d[0]+=32;
	printf("My name is %s.\n",a);
	printf("I study at %s Secondary School.\n",e);
	printf("I go to school by %s with my classmate %s.\n",d,b);
	printf("We both like %s.",c);
	return 0;
}
