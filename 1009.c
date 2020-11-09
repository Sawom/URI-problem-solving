#include<stdio.h>
int main(){
    char name[20];
    double salary,sell,total;
    gets(name);
    scanf("%lf%lf",&salary,&sell);
    total= salary+ (.15*sell);

    printf("TOTAL = R$ %.2lf\n",total) ;
    return 0;
}

