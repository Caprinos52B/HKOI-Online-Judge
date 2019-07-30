#include<stdio.h>
#include<string.h>
int d[10000];
int h,t;

void initqueue(){
	h=0;
	t=-1;
	return;
}

int isEmpty(){
	if(t==-1)
		return 1;
	return 0;
}

void dequeue(){
	if(!(isEmpty()))
		t--;
	return;
}

void enqueue(int x){
	d[++t]=x;
	return;
}

void printq(){
	int i;
	for(i=0;i<=t;i++)
		printf("%d ",d[i]);
	return;
}

int main(){
	int i,n,size,v;
	char command[1024];
	initqueue();
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",command);	
		if(strcmp(command,"PUSH")==0){
			scanf("%d",&v);
			enqueue(v);
		}
		else if(strcmp(command,"POP")==0){
			if(isEmpty()==1)
				printf("Cannot pop\n");
			else
				dequeue();
		}
		else if(strcmp(command,"TOP")==0){
			if(isEmpty()==1)
				printf("Empty\n");
			else
				printf("%d\n",d[t]);
		}
		else if(strcmp(command,"SIZE")==0){
			if(isEmpty()==1)
				printf("0\n");
			else
				printf("%d\n",size=t+1);
		}
	}
	return 0;
}
