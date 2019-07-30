#include<stdio.h>
#include<string.h>

int main(){
	int i,len;
	char a[51],b[51];
	gets(a);
	len=strlen(a);
	for(i=len-1;i>=0;i--){
		printf("%c",a[i]);
		b[len-i-1]=a[i];
	}
	b[len]='\0';
	if(strcmp(b,a)==0)	
		printf("\nYes");
	else
		printf("\nNo");
	return 0;
}
