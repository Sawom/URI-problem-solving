#include <stdio.h>
int main(){
    int j,x,sum;

    while(1){
        sum=0;
        scanf("%d", &x);
        if(x==0)break;
        if(x%2!=0) x++;
        for(j=0;j<5;j++){
            sum=sum+x;
            x=x+2;
        }
        printf("%d\n",sum);
    }
    return 0;
}

