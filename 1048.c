#include<stdio.h>
int main(){
    float salary,bns,tsalary;
    int p;
    char c='%';
    scanf("%f",&salary);

    if(salary>0 && salary<=400.00){
        bns = (salary*15)/100;
        tsalary = salary+bns;
        p=15;
    }
    else if(salary>400.01 && salary<=800.00){
        bns = (salary*12)/100;
        tsalary = salary+bns;
        p=12;
    }
    else if(salary>800.01 && salary<=1200.00){
        bns = (salary*10)/100;
        tsalary = salary+bns;
        p=10;
    }
    else if(salary>1200.01 && salary<=2000.00){
        bns = (salary*7)/100;
        tsalary = salary+bns;
        p=7;
    }
    else if(salary>2000.00){
        bns = (salary*4)/100;
        tsalary = salary+bns;
        p=4;
    }
    printf("Novo salario: %.2f\n",tsalary);
    printf("Reajuste ganho: %.2f\n",bns);
    printf("Em percentual: %d %c\n",p,c);
    return 0;
}

