#include<iostream>
using namespace std;
int main(){
    int a,b,c,temp,d,e,f;
    cin>>a>>b>>c;
    d=a;
    e=b;
    f=c;

    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<endl;
    cout<<d<<endl<<e<<endl<<f<<endl;
    return 0;
}


