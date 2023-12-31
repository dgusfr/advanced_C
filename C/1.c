#include<stdio.h>
#include<string.h>
#include<math.h>
#include"base.h"
#include<stdlib.h>

int main()
{
    int i,qtd,qtd2,k,j,c,base_n,base_m,soma=0,numero,n_convertido[50];
    char n[50],na[50],nd[50];
    float soma2=0.0,soma_total=0.0;

    printf("Digite um numero: ");
    scanf("%s",n);

    printf("Base atual: ");
    scanf("%d",&base_n);

    printf("Base futura: ");
    scanf("%d",&base_m);

    qtd=strlen(n);
    c=qtd-1;

    for(i=0;i<qtd;i++)
    {
        if(n[i]=='.')
        {
            qtd2=qtd-i;
            k=i;
        }
        else
        {
            k=i;
            qtd2=0;
        }

    }

    j=0;

    for(i=0;i<k;i++)
    {
        while(j<qtd2)
        {
            na[j]=n[i];
            j++;
            break;
        }
    }

    j=0;

    for(i=k+1;i<qtd;i++)
    {
        while(j<qtd2)
        {
            nd[j]=n[i];
            j++;
            break;
        }
    }
    c=qtd-1;
    for(j=0;j<k;j++)
    {
        na[j]=inteiro(na[j]);
        soma=soma+na[j]*(pow(base_n,c));
        c--;
    }
    printf("Soma: %d",soma);

    c=-1;

    if(qtd2>0)
    {
        for(j=0;j<qtd2-1;j++)
        {
            nd[j]=inteiro(nd[j]);
            soma2= soma2 + nd[j]*pow(base_n,c);
            c--;
        }
    }
    else
        soma2=0;

    soma_total=soma+soma2;

    printf("Base(10): %.4f",soma_total);

    for(i=0;i<k;i++)
    {
        n_convertido[i]=soma % base_m;
        soma=soma/base_m;
    }

    return 0;
}
