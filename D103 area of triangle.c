#include<stdio.h>
#include<math.h>
int main(){
    double a, b, C, pi=3.14159265;
    scanf("%lf", &a);
    scanf("\n%lf", &b);
    scanf("\n%lf", &C);
    printf("%.3lf", (0.5*a)*b*sin (C*pi/180));
    return 0;
}
