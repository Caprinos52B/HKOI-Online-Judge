#include<stdio.h>
#include<math.h>
int main(){
    double fare;
    int fare1;
    scanf("$%lf", &fare);
    fare1=fare*10;
    if(fare1%2==1){
        fare=ceil(fare*5)/10;
    }
    else {
        fare=fare/2;
    }
    printf("$%.1lf", fare);
    return 0;
}
