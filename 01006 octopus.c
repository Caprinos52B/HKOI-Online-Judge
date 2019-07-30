#include<stdio.h>
#include<string.h>

int main(){
	int v,n,i,a[32751],bill=0,trans=0;
	scanf("%d",&v);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		do{
			scanf("%d",&a[i]);
		}while(a[i]<1 && a[i]>250);
		bill+=a[i];
	}
	trans=((bill-v)/250+1)*250;
	if(v-bill<=0)
		printf("$%d",trans);
	else  printf("$0");
	return 0;
}
