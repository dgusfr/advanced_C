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
    depois->minutos = 30; /// ele identifica como depois.horas e depois o asterisco Ex: *(depois.horas)->errado
    depois->segundos = 40; ///(é assim que o PC enxerga), porém é so depois que é ponteiro(*depois)

    printf("%d %d %d",agora.horas,agora.minutos,agora.segundos);

    return 0;
}
