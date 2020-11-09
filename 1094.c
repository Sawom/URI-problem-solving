#include<stdio.h>
int main(){
    int c=0,r=0,s=0,test,i,num,total;
    char ch;
    double x,y,z;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d %c",&num,&ch);
        if(ch=='S'){
            s=s+num;
        }
        else if(ch=='R'){
            r=r+num;
        }
        else if(ch=='C'){
            c=c+num;
        }
    }
    total= c+r+s ;
    x=(c*100.00)/total;
    y=(r*100.00)/total;
    z=(s*100.00)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}

