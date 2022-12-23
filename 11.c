#include<stdio.h>

int main()
{
    struct horario
    {
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora, *depois; ///aponta para estruturas do tipo horario!
    depois = &agora;

    depois->horas = 20; ///Tem que colocar o ponteiro entre parenteses, senão
    depois->minutos = 80; /// ele identifica como depois.horas e depois o asterisco Ex: *(depois.horas)->errado
    depois->segundos = 50; ///(é assim que o PC enxerga), porém é so depois que é ponteiro(*depois)

    int somatorio = 100;

    struct horario antes;

    antes.horas = somatorio + depois->segundos;
    antes.minutos = agora.horas + depois->minutos;
    antes.segundos = depois->minutos + depois->segundos;

    printf("%d %d %d",antes.horas,antes.minutos,antes.segundos);

    return 0;
}
