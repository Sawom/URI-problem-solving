#include<bits/stdc++.h>
using namespace std;
#define size 35
int main(){
    int i,n;
    char str[size]= "LIFE IS NOT A PROBLEM TO BE SOLVED";
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            printf("%c",str[i]);
        }
        printf("\n");
    }
return 0;
}
