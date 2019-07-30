#include<stdio.h>

int main(){
	int k,n,f,i,j,temp=0,d[100];
	scanf("%d",&n);
	for(k=0;k<n;k++){
		f=0;
		scanf("%d",&d[k]);
		if(k>0){
			for(i=1;i<k+1;i++){
				j=i-1;
				temp=d[i];
				while(temp<d[j]&&j>=0){
					d[j+1]=d[j];
					j--;			
				}
				d[j+1]=temp;
			}
		}
		while(f<=k){
			printf("%d ",d[f]);
			f++;
		}
		printf("\n");
	}
	return 0;
}
