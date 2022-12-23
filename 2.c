#include<stdio.h>
#include<math.h>

double f(double x)
{
    return pow(x,2)-x;
}

double dfdx(double x)
{
    double h=pow(10,-6);
    return(f(x+h)-f(x))/h;
}

int main()
{
    printf("Função: %.3f\nDerivada: %.3f",f(0),dfdx(0));
}
