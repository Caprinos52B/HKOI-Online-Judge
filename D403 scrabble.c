#include<stdio.h>
#include<string.h>
char s[11];
int len=0,table[26];

void init(){
    int i=0;
    while(i<26){
        table[i]=0;
        i++;
    }
    return;
}

void dictionary(){
    int i;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
        table[s[i]-65]++;
    return;
}

int compare(char sub[],int sbl){
    int i,flag=1,bns[26];
    for(i=0;i<26;i++)
        bns[i]=table[i];
    for(i=0;i<sbl;i++){
        if(bns[sub[i]-65]>0)
            bns[sub[i]-65]--;
        else{
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    int i,n,sbl;
    char sub[101];
    init();
    dictionary();
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",sub);
        sbl=strlen(sub);
        if(!compare(sub,sbl))
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
