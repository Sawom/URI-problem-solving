#include<stdio.h>
int main(){
    int i,j,test,a,b,temp,x=0;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d%d",&a,&b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0)
            a--;
            a=a+2;
            for(j=a;j<b;j=j+2){
                x=x+j;
            }
            printf("%d\n",x);
            x=0;
    }
    return 0;
}

