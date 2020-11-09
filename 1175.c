#include<stdio.h>
int main(){
    int A[20],i;
    for(i=19;i>=0;i--){
        scanf("%d",&A[i]);
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,A[i]);
    }
    return 0;
}

