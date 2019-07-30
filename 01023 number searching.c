#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int i,a[100000],n,k,hs,ths,temp;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,hs=a[0],temp=0,ths=0;i<n;i++){
        ths=a[i+1];
        temp=abs(ths-k);
        if(temp<abs(hs-k))
            hs=ths;
        else if(temp==abs(hs-k)){
            if(ths>=hs)
                hs=ths;
        }
    }
    printf("%d",hs);
    return 0;
}
