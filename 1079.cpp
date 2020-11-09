#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,avg;
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%f%f%f",&a,&b,&c);
        avg=a*2.0+b*3.0+c*5.0;
        printf("%.1f\n",avg/10.0);
    }
    return 0;
}

