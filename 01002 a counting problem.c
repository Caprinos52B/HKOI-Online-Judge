#include<stdio.h>
#include<string.h>


int main(){
	int i,j,len1,len2,count=0,g;
	char a[1001],b[201],h[201];
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1;i++){
		if(a[i]==b[0]){
			for(j=0,g=i;j<len2;j++,g++)
				h[j]=a[g];
			h[len2]='\0';
			if(strcmp(h,b)==0){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
