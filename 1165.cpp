#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,i,j,n,count;
    scanf("%d",&test);

    for(i=0;i<test;i++){
        count=0;
        scanf("%d",&n);
        for(j=2;j<n;j++){
            if(n%j==0){
                count++;
                break;
                }
            }
        if(count==0){
        printf("%d eh primo\n",n);
        }
        else if(count!=0){
         printf("%d nao eh primo\n",n);
        }

    }
    return 0;
}

