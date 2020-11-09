#include <bits/stdc++.h>
using namespace std;
int main(){
    float n,avg,num=0;
    int i,positive=0;

    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            num=num+n;
            positive++;
        }
    }
    avg = num/positive;
    printf("%d valores positivos\n",positive);
    printf("%.1lf\n",avg);
    return 0;
}
