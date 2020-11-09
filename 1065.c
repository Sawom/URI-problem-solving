#include<stdio.h>
int main(){
    int x,i,even;
    even =0;
    for(i=1;i<=5;i++){
        scanf("%d",&x);
        if(x%2==0){
            even++;
        }
    }
    printf("%d valores pares\n",even);

    return 0;
}


