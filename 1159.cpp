#include<iostream>
using namespace std;
int main(){
    int j,x,sum;

    while(1){
        sum=0;
        cin>>x;
        if(x==0)break;
        if(x%2!=0) x++;
        for(j=0;j<5;j++){
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<endl;
    }
    return 0;
}

