#include<stdio.h>
#include<math.h>

float det_gauss(int n)
    {
        int i,j,k;
        float aux,val_det,t,mat[10][10];
        val_det = 1;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            printf("Posicao[%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            k = i;
            for(j=i+1;j<n;j++)//Descobre a linha com maior valor na coluna i
            {
                if(abs(mat[j][i]) > abs(mat[k][i]))
                    k = j;
            }
            if(k != i) // se a coluna com maior valor for diferente da coluna i faz a troca e troca o sinal do determinante
            {
                aux=mat[i][j];
                mat[i][j]=mat[k][j];
                mat[k][j]=aux;
                //val_det = -val_det;
            }
            for(j=i+1;j<n;j++)
            {
                if(mat[i][i]==0) //evita a divisão por zero quando o denominador é igual a zero
                    t=0;
                else
                    t = mat[j][i] / mat[i][i];
                for(k=i+1;k<n;k++)
                {
                    mat[j][k] -= t * mat[i][k];
                }
                mat[j][i] = 0;
            }
            val_det *= mat[i][i]; // calcula o determinante multiplicando somente os elementos da diagonal principal
        }
    return val_det;
    }

    int main()
{
    int n;
    float det=0;

    printf("Digite a ordem da matriz: ");
    scanf("%d",&n);

    det=det_gauss(n);

    printf("%.2f",det);
    return 0;
}

