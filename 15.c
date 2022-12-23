#include<stdio.h>

struct lista
{
    int valor;
    struct lista *proximo;
};

struct lista *procuravalor(struct lista *plista, int valor)/// *plista = começo da lista(&m1)
{
    while(plista != NULL)
    {
        if(plista->valor == valor)
            return (plista);
        else
            plista = plista->proximo;
    };

    return NULL;
};

int main()
{
    struct lista *procuravalor(struct lista *plista, int valor);
    struct lista m1,m2,m3;
    struct lista *resultado, *gancho = &m1;
    int valor;

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = NULL;

    printf("Digite o valor da pesquisa: ");
    scanf("%d",&valor);

    resultado = procuravalor(gancho,valor); ///gancho: recebe o endereço de memória da lista!

    if(resultado == NULL)
        printf("Valor nao encontrado!");
    else
        printf("Valor %d encontrado!", resultado->valor);
}
