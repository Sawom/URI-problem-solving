#include<stdio.h>
int main(){
    int t,i,j,k,a[75][75];
    while(scanf("%d",&t)!=EOF){
            k=t-1;
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                if(i==j) a[i][j]=1;
                else a[i][j]=3;
                if(j==k) a[i][j]=2;
            }k--;
        }
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

