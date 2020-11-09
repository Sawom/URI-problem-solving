#include<stdio.h>
int main(){
    int n,i,num=0,pos;
    for(i=1;i<=100;i++){
        scanf("%d",&n);
        if(n>num){
            num=n;
            pos= i;
        }
    }
    printf("%d\n%d\n",num,pos);
    return 0;
}

