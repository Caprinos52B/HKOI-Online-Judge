#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x<100){
        if(x%10==1&&x!=11){
            printf("%dst", x);
        }
        else if(x%10==2&&x!=12){
            printf("%dnd", x);
        }
        else if(x%10==3&&x!=13){
            printf("%drd", x);
        }
        else{
            printf("%dth", x);
        }
    }
    else{
        if(x%10==1&&x%100!=11){
            printf("%dst", x);
        }
        else if(x%10==2&&x%100!=12){
            printf("%dnd", x);
        }
        else if(x%10==3&&x%100!=13){
            printf("%drd", x);
        }
        else{
            printf("%dth", x);
        }
    }
    return 0;
}
