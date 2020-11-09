#include<bits/stdc++.h>
using namespace std;
int main(){
    double M[12][12], sum=0;
    int i,j,n=1;
    char O[2];
    scanf("%c",&O);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=1;i<12;i++){
        for(j=0;j<n;j++){
            sum = sum+M[i][j];
        }
        n++;
    }
    if(O[0]=='S'){
        printf("%.1lf\n",sum);
    }
    else{
        printf("%.1lf\n",sum/66.0);
    }
    return 0;
}

