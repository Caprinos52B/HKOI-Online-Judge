#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, d, r1, r2;
    scanf("%lf",&a);
    scanf("\n%lf", &b);
    scanf("\n%lf",&c);
    d=b*b-4*a*c;
    if (d>=0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        if(r1==r2){
            printf("%.3lf", r1);
        }
        else{
            if(r2<r1){
                printf("%.3lf %.3lf", r2, r1);
            }
            else{
                printf("%.3lf %.3lf", r1, r2);
            }
        }
    }
    else{
        printf("None");
    }
    return 0;
}
