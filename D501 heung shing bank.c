#include<stdio.h>

int main(){
	int i,n,temp,sum=0;
	FILE *infile;
	infile=fopen("account.txt","r");	
	fscanf(infile,"%d",&n);
	for(i=0;i<n;i++){
		fscanf(infile,"%d",&temp);
		sum+=temp;
	}
	printf("%d",sum);
	fclose(infile);
	return 0;
}
