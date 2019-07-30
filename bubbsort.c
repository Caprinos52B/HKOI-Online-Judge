#include<stdio.h>
#include<string.h>

int main(){
	int i,j,temp,len,x,y;
	char a[10000];
	gets(a);
	len=strlen(a);
	for(i=0;i<len-1;i++){
		for(j=0;j<len-j-1;j++){
			x=a[i]-'0';
			y=a[i+1]-'0';
			if(x>y){
				temp=x;
				x=y;
				y=temp;
				a[i]=x+'0';
				a[i+1]=y+'0';
			}
		}
	}
	printf("%s",a);
	return 0;
}
