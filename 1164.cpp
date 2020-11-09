#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,x,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            k=0;
        scanf("%d",&x);
        for(j=1;j<=x/2;j++){
            if(x%j==0)k=k+j;
        }
        if(k==x) printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);
    }
    return 0;
}

