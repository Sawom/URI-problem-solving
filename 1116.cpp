#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,test;
    float a,b;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%f%f",&a,&b);
        if(b==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",a/b);
        }
    }
    return 0;
}
