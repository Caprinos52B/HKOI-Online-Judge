#include<stdio.h>
#include<string.h>

int main(){
	int i,flag=0,n,t,k=0;
	char a[1000001],d[1000001];
	gets(a);
	n=strlen(a);
	for(i=0,t=0;i<n;i++,t++){
			d[t]=a[i];
			if(d[t-3]=='y'&&d[t-2]=='o'&&d[t-1]=='u'&&(d[t]==32||d[t]==46)){
				flag++;
				if((d[t-11]==32||d[t-11]==46)&&d[t-10]=='I'&&d[t-9]==' '&&d[t-8]=='l'&&d[t-7]=='o'&&d[t-6]=='v'&&d[t-5]=='e'&&d[t-4]==' '){
					t-=12;
					i--;
					k++;
				}
				if(d[t-11]==0&&d[t-10]=='I'&&d[t-9]==' '&&d[t-8]=='l'&&d[t-7]=='o'&&d[t-6]=='v'&&d[t-5]=='e'&&d[t-4]==' '){
					if((a[t+1]>=65&&a[t+1]<=90)||(a[t+1]>=97&&a[t+1]<=122)){
						t-=10;
						d[t]=a[++i];
						k++;
					}
					else{
						t-=11;
						d[t]=a[++i];
						k++;
					}
				}
			}
			if(d[t-1]==46&&d[t]==46)
				t--;
		}
	if(k>0){	
		for(i=0;i<t;i++){
			if(d[0]==' '){
				printf("%c",d[++i]);
				d[0]='_';
		}
			else 
				printf("%c",d[i]);
		}
	}
	else 
		printf("%s",a);
	return 0;
}
