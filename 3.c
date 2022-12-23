#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    char op;

    printf("Quantidade de pontos: ");
    scanf("%d",&n);
    float x[n],y[n],xk,yk=0.0,a[n],b[n];

    for(i=0;i<n;i++)
    {
        printf("x[%d]: ",i+1);
        scanf("%f",&x[i]);
        printf("y[%d]: ",i+1);
        scanf("%f",&y[i]);
    }

    for(i=0;i<n-1;i++)
    {
        a[i]=(y[i+1]-y[i])/(x[i+1]-x[i]);
        b[i]=-a[i]*x[i]+y[i];
        printf("%.2f<x<%.2f: %.2fx+(%.2f)\n",x[i],x[i+1],a[i],b[i]);
    }

    return 0;
}
