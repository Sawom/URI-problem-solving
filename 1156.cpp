#include<bits/stdc++.h>
using namespace std;
int main(){
    double sum=0,i,j=1.0;
    for(i=1;i<=39;i=i+2){
        sum= sum +(i/j);
        j=(j+j);
    }
    printf("%.2lf\n",sum);
    return 0;
}


