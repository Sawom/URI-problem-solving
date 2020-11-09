#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    int i,j,x=1,y=10;
    char a[2];
    scanf("%s",&a);
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 0;i < 5;i++){
        for(j=x;j<=y;j++){
            sum=sum+N[i][j];
        }
        x++; y--;
    }



    if(a[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30.0);
    return 0;
}

