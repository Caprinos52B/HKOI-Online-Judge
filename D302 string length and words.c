#include<stdio.h>
#include<string.h>

int main(){
	int i,len,words;
	char a[257];
	gets(a);
	len=strlen(a);
	printf("%d\n",len);
	for(i=0,words=1;i<len-1;i++){
		if(a[i]==32 && a[i+1]!=32)
			words++;
	}
	printf("%d",words);
	return 0;
}
