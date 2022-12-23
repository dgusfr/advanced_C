#include<stdio.h>

int main()
{
    int x = 10,*resultado;
    double y = 20.50,soma;
    char z = 'a';

    int *px = &x;
    double *py = &y;
    char *pz = &z;

    soma = *px + *py;
    resultado = 2293504; ///Endereço de memoria de x

    printf("Endereco x: %d Valor: %d\n",px,*px);
    printf("Endereco y: %d Valor: %.2lf\n",py,*py);
    printf("Endereco z: %d Valor: %c\n",pz,*pz);
    printf("Soma: %.2lf\n",soma);
    printf("Resultado: %d",*resultado);

    return 0;
}
