#include<stdio.h>

int main()
{
    void testevariavel(int x);
    void testeponteiro(int *px);
    int teste = 1;
    int *pteste = &teste;

    testevariavel(teste); ///Quando ela for executada, no printf ,vai sair 1 porque o teste(função principal) e o x(função testevariavel) são duas variaveis diferentes!
    testeponteiro(pteste); ///Quando ela for executada, no printf vai sair 2 porque como a função tem como parametro o endereço de memoria, é adicionado +1 no valor de teste, resumindo, só exite uma variavel!

    printf("%d\n",teste);

    return 0;
}

void testevariavel(int x)
{
    ++x;
}
void testeponteiro(int *px) ///Recebe o endereço de memoria do ponteiro
{
    ++*px; ///Adiciona +1 no valor do ponteiro!
}

