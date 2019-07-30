#include<stdio.h>
#include<string.h>	
//1. Remember to '\0' if string is altered and copied in your own way
//2. Use flag to track if certain actions are done
//3. Consider all scenarios and avoid interference
//4. Be clever
//5. Most important of all, READ THE QUESTION AND REQUIREMENTS!

void input(char x[],char y[]){
	scanf("%s",x);
	scanf("%s",y);
	return;
}

void compare(int *v,char x[],char y[]){
	int i,h,j,k,flag=0;
	char m[21],n[21];
	j=strlen(x);
	k=strlen(y);
	for(i=0,h=0;i<j;i++){
		if(x[i]>=65&&x[i]<=90){
			m[h]=x[i];
			h++;
			flag++;
		}
		else if(x[i]>=97&&x[i]<=122){
			m[h]=x[i]-32;
			h++;
			flag++;
		}
	}
	if(flag>0)
		m[h]='\0';
	for(i=0,h=0;i<k;i++){
		if(y[i]>=65&&y[i]<=90){
			n[h]=y[i];
			h++;
		}
		else if(y[i]>=97&&y[i]<=122){
			n[h]=y[i]-32;
			h++;
		}
	}
	if(flag>0)
		n[h]='\0';
	*v=strcmp(m,n);
	return;
}

void print(int v,char x[],char y[]){
	if(v==0)
		printf("%s is equal to %s",x,y);
	else if(v<0)
		printf("%s is less than %s",x,y);
	else
		printf("%s is greater than %s",x,y);
	return;
}

int main(){
	int v;
	char x[21],y[21];
	input(x,y);
	compare(&v,x,y);
	print(v,x,y);
	return 0;
}
