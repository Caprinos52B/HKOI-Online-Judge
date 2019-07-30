#include<stdio.h>

int main(){
	int i,n,s[100],d[100],j;
	double sts[100][100];
	char type[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			scanf("%lf",&sts[i][j]);
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %c",&s[i],&d[i],&type[i]);
		s[i]=s[i]-1;
		d[i]=d[i]-1;
		if(type[i]=='A'){
			if(s[i]<d[i])
				printf("%.1lf\n",sts[s[i]][d[i]]);
			else
				printf("%.1lf\n",sts[d[i]][s[i]]);
		}
		else if(type[i]=='C'){
			if(s[i]>d[i])
				printf("%.1lf\n",sts[s[i]][d[i]]);
			else
				printf("%.1lf\n",sts[d[i]][s[i]]);
		}
	}
	return 0;
}
