#include<stdio.h>
int main()
{
    double N[12][12],sum;
    char x[2];
    scanf("%c",&x);
    int i,j,n=1;

    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 0;i < 12;i++){
            for(j = n;j < 12;j++)
            sum = sum + N[i][j];n++;
        }
    if(x[0]=='S')printf("%.1lf\n",sum);
    else if(x[0]=='M')printf("%.1lf\n",sum/66.0);
    return 0;
}


