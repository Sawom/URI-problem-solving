#include<stdio.h>
int main(){
    int row,col,k,l,m,n;
    for(;;){
        scanf("%d",&n);
        if(n==0){
                break;
        }
        int ary[n][n];
        for(row=0;row<n;row++){
            m=row+1;
            k=2;
            for(col=0;col<=row;col++,m--){
                ary[row][col]=m;
            }
            for(col=row+1;col<n;col++,k++){
                ary[row][col]=k;
            }
        }
        for(row=0;row<n;row++){
            for(col=0;col<n;col++){
                if(col==0){
                    printf("%3d",ary[row][col]);
                }
                else{
                    printf(" %3d",ary[row][col]);
                }
            }
            printf("\n");
        }printf("\n");
    }
    return 0;
}
