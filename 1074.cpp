#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&n);
            if(n==0){
                printf("NULL\n");
            }
            else if(n>0 && n%2==0){
                printf("EVEN POSITIVE\n");
            }
            else if(n>0 && n%2==1){
                printf("ODD POSITIVE\n");
            }
            else if(n<0 && n%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }
    }
    return 0;
}



