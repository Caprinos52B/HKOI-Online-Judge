#include<stdio.h>

int main(){
	int n=0,l=0;
	char base[7];
		gets(base);
		if(base[0]=='O'&&base[1]=='C'&&base[2]=='T'){
			if((base[4]-48==3&&base[5]-48<=1)||(base[4]-48<=2&&base[5]-48<8)){
				n=(base[4]-48)*8+base[5]-48;
				if(n>9)
					printf("DEC %d",n);
				else
					printf("DEC 0%d",n);
			}
			else
				printf("No solution");
		}
		else if(base[0]=='D'&&base[1]=='E'&&base[2]=='C'){
			if((base[4]-48==2&&base[5]-48<=5)||(base[4]-48<2&&base[4]-48<=9)){
				n=((base[4]-48)*10+base[5]-48)/8;
				l=((base[4]-48)*10+base[5]-48)%8;
				printf("OCT %d%d",n,l);
			}
			else
				printf("No solution");
		}
	return 0;
}

