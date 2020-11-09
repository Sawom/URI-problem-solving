#include<iostream>
using namespace std;
int main(){
    int a=0,b=0,i,n,test;
    cin>>test;
    for(i=0;i<test;i++){
        cin>>n;
        if(n>=10 && n<=20){
            a++;
        }
        else{
            b++;
        }
    }
    cout<<a<<" in"<<endl;
    cout<<b<<" out"<<endl;
}

