#include<stdio.h>

int main()
{
    struct horario
    {
        int *phoras;
        int *pminutos;
        int *psegundos;
    };

    struct horario hoje;

    int horas = 200;
    int minutos = 300;
    int segundos = 400;

    hoje.phoras = &horas;
    hoje.pminutos = &minutos;
    hoje.psegundos = &segundos;

    printf("%d %d %d",*hoje.phoras,*hoje.pminutos,*hoje.psegundos);

    *hoje.psegundos = 1000;

    printf("\n%d ",*hoje.psegundos);

    return 0;
}
