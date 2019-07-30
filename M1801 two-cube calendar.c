#include<stdio.h>
#include<stdlib.h>

int isMatch(int d0[],int d1[],int n){
	int i,flag=0;
	for(i=0;i<6&&flag<1;i++){	
		if(d0[i]==n/10)
			flag++;
		else if(d0[i]==6||d0[i]==9){
			if(n/10==9||n/10==6)
				flag++;
		}
	}
	if(flag==1){
		for(i=0;i<6&&flag==1;i++){
			if(d1[i]==n%10)
				flag++;
			else if(d1[i]==6||d1[i]==9){
				if(n%10==9||n%10==6)
					flag++;
			}
		}
	}
	else{
		for(i=0;i<6&&flag<1;i++){
			if(d1[i]==n%10)
				flag++;
			else if(d1[i]==6||d1[i]==9){
				if(n%10==9||n%10==6)
					flag++;
			}
		}
	}
	if(flag<2){
		flag=0;
		for(i=0;i<6&&flag<1;i++){
			if(d1[i]==n/10)
				flag++;
			else if(d1[i]==6||d1[i]==9){
				if(n/10==9||n/10==6)
					flag++;
			}
		}
		if(flag==1){
			for(i=0;i<6&&flag==1;i++){
				if(d0[i]==n%10)
					flag++;
				else if(d0[i]==6||d0[i]==9){
					if(n%10==9||n%10==6)
						flag++;
				}
			}
		}
		else{
			for(i=0;i<6&&flag<1;i++){
				if(d0[i]==n%10)
					flag++;
				else if(d0[i]==6||d0[i]==9){
					if(n%10==9||n%10==6)
						flag++;
				}
			}
		}
	}
	return flag;
}

int main(){
	int i,n,dice0[6],dice1[6],num;
	for(i=0;i<12;i++){
		if(i<6)
			scanf("%d",&dice0[i]);
		else
			scanf("%d",&dice1[i-6]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		if(isMatch(dice0,dice1,num)==2)
			printf("Yes\n");
		else
			printf("No\n");
	}	
	return 0;
}

