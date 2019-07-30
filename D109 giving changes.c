#include<stdio.h>

int main(){
	int i,j,v0,v1,a[6]={1000,500,100,50,20,10};
	scanf("%d",&v0);
	v1=v0;
	for(i=0;v1>0;i++){
		if(v1%a[i]==0){
			for(j=0;j<(v1/a[i]);j++){
				printf("%d\n",a[i]);
			}
			v1=0;
		}
		else{
			if(v1%a[i]!=0 && v1%a[i]!=v1){
				for(j=0;j<(v1/a[i]);j++){
					printf("%d\n",a[i]);
				}
				v1=v1-(v1/a[i])*a[i];
			}
			else
				i=i;
		}
	}
	return 0;
}
