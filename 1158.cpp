#include<iostream>
using namespace std;
int main(){
    int i,j,x,y,sum,test;
    cin>>test;
    for(i=0;i<test;i++){
        sum=0;
        cin>>x>>y;
        if(x%2==0) x++;
        for(j=0;j<y;j++){
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<endl;
    }
    return 0;
}

