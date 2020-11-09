#include<iostream>
using namespace std;
int main(){
    int x,i,even;
    even =0;
    for(i=1;i<=5;i++){
        cin>>x;
        if(x%2==0){
            even++;
        }
    }
    cout<<even<<" valores pares"<<endl;

    return 0;
}


