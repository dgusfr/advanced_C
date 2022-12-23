#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,ms[60],aux;

    printf("Os numeros sorteados da mega-sena foram:\n");

    srand(200);

    for(i=0;i<6;i++)
    {
        ms[i]= rand() %60 +1;
    }

    if(i==1)
    {
        while(ms[1]==ms[0])
        {
           ms[1]= rand() %60 +1;
        }
    }

    else if(i==2)
    {
        while(ms[2]==ms[0] || ms[2]==ms[1])
        {
           ms[2]= rand() %60 +1;
        }
    }

    else if(i==3)
    {
        while(ms[3]==ms[0] || ms[3]==ms[1] || ms[3]==ms[2])
        {
           ms[3]= rand() %60 +1;
        }
    }

    else if(i==4)
    {
        while(ms[4]==ms[0] || ms[4]==ms[1] || ms[4]==ms[2] || ms[4]==ms[3])
        {
           ms[4]= rand() %60 +1;
        }
    }

    else if(i==5)
    {
        while(ms[5]==ms[0] || ms[5]==ms[1] || ms[5]==ms[2] || ms[5]==ms[3] || ms[5]==ms[4])
        {
           ms[5]= rand() %60 +1;
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",ms[i]);
    }
    return 0;
}
