#include<stdio.h>

int main(){
	long long mini,s,l,xl,n=0;
	scanf("%lld%lld%lld%lld",&mini,&s,&l,&xl);
	if(xl==0){
		if(mini%2==0)
			n=mini/2+s+l;
		else
			n=mini/2+1+s+l;
	}
	else{
		if(mini<=xl*2)
			n=s+l+xl*2;
		else if((mini-xl*2)%2==0)
			n=s+l+xl*2+(mini-xl*2)/2;
		else
			n=s+l+xl*2+(mini-xl*2)/2+1;
	}
	printf("%lld",n);
	return 0;
}
