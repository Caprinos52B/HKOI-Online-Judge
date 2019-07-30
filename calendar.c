#include<stdio.h>

int main(){
	int  i,j,d=0,y,m,dow=0,days;
	do{
		printf("Input year (>= 1900) : ");
		scanf("%d",&y);
	}while(y<1900);
	
	do{
		printf("Input month: ");
		scanf("%d",&m);
	}while(m<1 || m>12);
	
	for(i=1900;i<y;i++){
		if((i%4==0 && i%100!=0) || (i%400==0))
			d+=366;
		else
			d+=365;
	}
		
	for(j = 1;j <= m;j++){
		if (j%12==1 || j%12==3 || j%12==5 || j%12==7 || j%12==8 || j%12==10 || j%12==0)
				d=d+31;
		else if(j%12==4 || j%12 ==6 || j%12==9 || j%12==11)
			d=d+30;
		else
			if((i%4==0 && i%100!=0) || (i%400==0))
				d=d+29;
			else
				d=d+28;
	}		

	if(m%12==4 || m%12==6 || m%12==9 ||m%12==11)
		days = 29;
	else if (m%12==1 || m%12==3 || m%12==5 || m%12==7 || m%12==8 || m%12==10 || m%12==0)
		days=30;
	else{
		if((y%4==0 && y%100!=0) || (y%400==0))
			days=28;
		else
			days=27;
	}
	
	dow=(d-days)%7;

	if(m==1){
		printf("             ");
		printf("January");
	}
	else if(m==2){ 
		printf("            ");
		printf("February");
	}
	else if(m==3){
		printf("              ");
		printf("March");
	}
	else if(m==4){
		printf("              ");
		printf("April");
	}
	else if(m==5){
		printf("               ");
		printf("May");
	}
	else if(m==6){
		printf("              ");
		printf("June");
	}
	else if(m==7){
		printf("              ");
		printf("July");
	}
	else if(m==8){
		printf("             ");
		printf("August");
	}
	else if(m==9){
		printf("            ");
		printf("September");
	}
	else if(m==10){
		printf("             ");
		printf("October");
	}
	else if(m==11){
		printf("            ");
		printf("November");
	}
	else if(m==12){
		printf("            ");
		printf("December");
	}
	
	printf("\nMon  Tue  Wed  Thu  Fri  Sat  Sun\n");
	
	for(i=1;i<dow;i++){
		printf("     ");
	}
	
	if(m%12==4 || m%12==6 || m%12==9 || m%12==11){
		for(j=1;j<=30;j++){
			if(j<10){
				printf("%3d",j);
				printf("  ");
				if((dow+j)%7==1){
					printf("\n");
				}
			}
			else if(j>=10){
				printf("%3d",j);
				printf("  ");
				if((dow+j)%7==1){
					printf("\n");
				}
			}	
		}
	}
	
	else if(m%12==1 || m%12==3 || m%12==5 || m%12==7 || m%12==8 || m%12==10 || m%12==0){
		for(j=1;j<=31;j++){
			if(j<10){
				printf("%3d",j);
				printf("  ");
				if((dow+j)%7==1){
					printf("\n");
				}
			}
			else if(j>=10){
				printf("%3d",j);
				printf("  ");
				if((dow+j)%7==1){
					printf("\n");
				}
			}		
		}
	}

	else{
		if((y%4==0 && y%100!=0)||(y%400==0))
			for(j=1;j<=29;j++){
				if(j<10){
					printf("%3d",j);
					printf("  ");
					if((dow+j)%7==1){
						printf("\n");
					}	
				}
				else if(j>=10){
					printf("%3d",j);
					printf("  ");
					if((dow+j)%7==1){
						printf("\n");
					}	
				}
			}
		else{
			for(j=1;j<=28;j++){
				if(j < 10){
					printf("%3d",j);
					printf("  ");
					if((dow+j)%7==1){
						printf("\n");
					}	
				}
				else if(j>=10){
					printf("%3d",j);
					printf("  ");
					if((dow+j)%7==1){
						printf("\n");
					}	
				}
			}
		}	
	}
	return 0;
}
