#include<stdio.h>
#include<math.h>

double f(double x)
{
    return pow(x,2);
}


double integral(double a,double b)
{
    int i;
    double h,x,xi,soma=0;
    h=(b-a)/10000; //intervalo h
    x=a+h;
    for(i=0;i<10000;i++)
    {
        xi=a+h;
        soma = soma + h*((f(x)+f(xi))/2);
    }
    return soma;
}

main()
{
    double a,b,n,soma;

    printf("Digite o valor de A: ");
    scanf("%lf",&a);

    printf("Digite o valor de B: ");
    scanf("%lf",&b);

    soma = integral(a,b);

    printf("O valor da integral: %.2lf",soma);
}
