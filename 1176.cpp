#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,test,v;
    long long int N[60];
    N[0]=0;
    N[1]=1;
    for(i=2;i<=60;i++){
        N[i]=N[i-1]+N[i-2];
    }
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&v);
        printf("Fib(%d) = %lld\n",v,N[v]);
    }
    return 0;
}

