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

void enqueue(int x){
	d[++t]=x;
	return;
}

int dequeue(){
	int i,temp=d[0];
	if(!(isEmpty())){
		for(i=0;i<t;i++)
			d[i]=d[i+1];
		t--;
	}
	return temp;
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
		else if(strcmp(command,"FRONT")==0){
			if(isEmpty()==1)
				printf("Empty\n");
			else
				printf("%d\n",d[0]);
		}
		else if(strcmp(command,"SIZE")==0)
			printf("%d\n",size=t+1);
	}
	return 0;
}
