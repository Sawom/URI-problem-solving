#include<stdio.h>
int main(){
    int hour,speed;
    scanf("%d%d",&hour,&speed);
    float used = (float)(hour*speed)/12 ;
    printf("%.3f\n",used);
    return 0;
}

