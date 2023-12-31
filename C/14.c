#include<stdio.h>

int main()
{
    struct lista
    {
        int valor;
        struct lista *proximo;
    };

    struct lista m1,m2,m3;
    struct lista *gancho = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = NULL; ///aponta para um valor nulo!

    while(gancho != NULL)
    {
        printf("%d\n",gancho->valor); ///gancho está apontando para os valores de m1,m2,m3
        gancho = gancho->proximo;  /// gancho vai ser o proximo de gancho (m2, m3)
    }

    return 0;
}
