#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char op;

    printf("Gerando valores aleatorios:\n");

    op='r';

    while(op =='r')
    {
        printf("\n%d ", rand() %6 +1);
        printf("\nDigite 'r' para continuar ou qualquer outro botao para sair: ");
        scanf(" %c",&op);
    }
    return 0;
}
