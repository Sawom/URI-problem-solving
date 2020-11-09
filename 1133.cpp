#include<iostream>
using namespace std;
int main(){
    int x,y,temp,i;
    cin>>x>>y;
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    x++;
    for(i=x;i<y;i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
    }
    return 0;
}

