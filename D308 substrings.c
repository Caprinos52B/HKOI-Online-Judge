#include<stdio.h>
#include<string.h>

int main(){
    int i,j,n,l,k,olap=0,nolap=0,match=1,pos[50],p=0;
    char str[51],sub[51];
    scanf("%s%s",str,sub);
    n=strlen(str);
    l=strlen(sub);
    for(i=0;i<n;i++){
        if(str[i]==sub[0]){
			for(j=i+1,k=1,match=1;j<i+l;j++,k++){
				if(str[j]==sub[k])
					match++;
				else
					break;
			}
			if(match==l){
				pos[p]=j-1;
				olap++;
				nolap++;
				if(p>0&&(pos[p]-pos[p-1]<l))
					nolap--;
				else
					p++;
			}
		}
    }
    printf("%d\n%d",olap,nolap);
    return 0;
}
