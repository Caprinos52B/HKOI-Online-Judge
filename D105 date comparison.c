#include<stdio.h>
int main(){
    int y1, y2, m1, m2, d1, d2;
    scanf("%d %d %d \n%d %d %d",&y1, &m1, &d1, &y2, &m2, &d2);
    if(y1<y2){
        printf("Before");
    }
    else if(y1>y2){
        printf("After");
    }
    else if(y1==y2){
        if(m1<m2){
            printf("Before");
        }
        else if(m1>m2){
            printf("After");
        }
        else if(m1==m2){
            if(d1<d2){
                printf("Before");
            }
            else if(d1>d2){
                printf("After");
            }
            else if(d1==d2){
                printf("Same");
            }
        }
    }
    return 0;
}
