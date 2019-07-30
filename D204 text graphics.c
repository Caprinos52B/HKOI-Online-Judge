#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,p,q,h,n;
	scanf("%d",&n);
	if(n==1)
		printf("#");
	else{
		for(i=0;i<n;i++){
			for(j=0;j<abs(n/2-i);j++){
				printf(" ");
			}
			printf("#");
			for(p=0;p<n/2-abs(n/2-i);p++){
				printf(" ");
			}
			if(i<=n/2){
				for(q=1;q<i;q++){	
					printf(" ");
				}
			}
			if(i>n/2 && i<n-2){
				for(h=0;h<n-2-i;h++){
					printf(" ");
				}
			}
			if(i!=0 && i!=n-1)
				printf("#");
			printf("\n");
		}
	}
	return 0;
}
