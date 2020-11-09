#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A,B,avg;
    cin>>A>>B;
    avg = (3.5*A+7.5*B) / (3.5+7.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<avg<<endl;
    return 0;
}

