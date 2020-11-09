#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,sum=0;
    float i=0,avg;
    while(1){
        scanf("%d",&a);
        if(a<0)break;
        sum=sum+a;
        i++;
    }
    avg=sum/i;
    printf("%.2f\n",avg);
    return 0;
}

