#include<stdio.h>
int main(){
    double A,B,C,avg;
    scanf("%lf %lf %lf",&A,&B,&C);
    avg = (2*A+3*B+5*C) / (2+3+5);
    printf("MEDIA = %.1lf\n",avg);
    return 0;
}

