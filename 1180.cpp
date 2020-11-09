#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    int X[N],pos,i;
    for(i=0;i<N;i++){
        scanf("%d",&X[i]);
    }
    int min = X[0];
    for(i=1;i<N;i++){
        if(min>X[i]) min=X[i];
    }
    for(i=1;i<N;i++){
        if(min==X[i]){
            pos=i;
        }
    }

    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}

