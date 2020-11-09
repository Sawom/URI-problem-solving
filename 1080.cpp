#include<iostream>
using namespace std;
int main(){
    int n,i,num=0,pos;
    for(i=1;i<=100;i++){
        cin>>n;
        if(n>num){
            num=n;
            pos= i;
        }
    }
    cout<<num<<endl<<pos<<endl;
    return 0;
}

