#include<bits/stdc++.h>
using namespace std;
int main(){
    int N[10],i,x;
    scanf("%d",&x);
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,x);
        x=x+x;
    }
    return 0;
}


