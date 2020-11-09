#include<stdio.h>
int main(){
    int number,hour;
    double amount, salary ;
    scanf("%d%d%lf",&number,&hour,&amount);
    salary = hour*amount;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;
}

