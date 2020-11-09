#include<stdio.h>
int main(){
    double a,b,c,d,e;
    double avg1, avg2,media;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    avg1=((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n",avg1);
    if(avg1>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg1<5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        avg2= (avg1+e)/2;
        printf("Nota do exame: %.1lf\n",e);
        if(avg2>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reaprovado.\n");
        }
        printf("Media final: %.1lf\n",avg2);
    }
    return 0;
}

