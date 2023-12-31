#include<stdio.h>

int main()
{
    int x;
    x=10;

    int *p; /// aponta para o valor da variavel escolhida;
    p=&x; /// acessa o endereço de memória;

    printf("%d %d",*p,p);

    return 0;
}
