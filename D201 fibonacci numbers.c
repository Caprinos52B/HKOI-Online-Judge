#include<stdio.h>

int main(){
	int a = 0, b = 1, c = 0, d, i;
	scanf("%d", &d);
	if(d == a)
		printf("%d", a);
	else if(d == b)
		printf("%d", b);
	else{
		for(i = 1;i < d;i++){
			c = a + b;
			a = b;
			b = c;
		}
	printf("%d", c);
	}
	return 0;
}
