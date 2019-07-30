#include<stdio.h>
#include<string.h>
char email[51],n,at;

int username(){
	int i,flag=0,mine=0;
	for(i=0;i<at;i++){
		if((email[i]>='A' && email[i]<='Z')||(email[i]>='a' && email[i]<='z')||(email[i]>='0' && email[i]<='9')||email[i]=='+'||email[i]=='.')
			flag++;
		else{
			flag=-1;
			break;
		}
		if((i==0 && email[i]=='.')||(i==at-1 && email[i]=='.')){
			mine=-1;
			break;
		}
		if(email[i]=='.' && email[i+1]=='.'){
			mine=-1;
			break;
		}
	}
	if(mine==-1)
		return -1;
	if(flag<1)
		return -1;
	return 1;
}

int host(){
	int i,flag=0,mine=0,mine2=0;
	for(i=at+1;i<n;i++){
		if((email[i]>='A' && email[i]<='Z')||(email[i]>='a' && email[i]<='z')||(email[i]>='0' && email[i]<='9')||email[i]=='-'||email[i]=='.')
			flag++;
		else{
			flag=-1;
			break;
		}
		if((i==at+1 && email[i]=='.')||(i==n-1 && email[i]=='.')){
			mine=-1;
			break;
		}
		if(email[i]=='.' && email[i+1]=='.'){
			mine=-1;
			break;
		}
		if((email[i]=='-' && email[i+1]=='.')||(email[i]=='.' && email[i+1]=='-')){
			mine=-1;
			break;
		}
		if(email[i]=='.')
			mine2++;
	}
	if(mine==-1)
		return -1;
	if(flag<3)
		return -1;
	if(mine2<1)
		return -1;
	return 1;
}

int main(){
	int i,atcounter=0;
	gets(email);
	n=strlen(email);
	for(i=0;i<n;i++){
		if(email[i]=='@'){
			at=i;
			atcounter++;
		}
	}
	if(atcounter!=1)
		printf("Invalid");
	else{
		if(username()==1 && host()==1)
			printf("Valid");
		else
			printf("Invalid");
	}
	return 0;
}
