#include <stdio.h>
#include <stdlib.h>

float *transpost_simple(int m, int n, float *mat);

float **transpost_pointer(int m, int n, float **mat);

int main(void)
{
    int n,m;
    int mat[10];
    printf("digite as dimensoes das matrizes, primeiro linhas depois colunas");
    scanf("%d%d",&n,&m);
    transpost_pointer(n, m, mat);
    transpost_simple(n,m,mat);
    return 0;
}

float *transpost_simple(int m, int n, float *mat)
{ // vetor simples
    int i, j;
    float *trp;

    trp = (float *)malloc(n * m * sizeof(float));

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            trp[j * m + i] = mat[i*n + j];

    return trp;
}

float **transpost_pointer(int m, int n, float **mat)
{

    int i, j;
    float **trp;

    trp = (float **)malloc(m * sizeof(float));

    for (i = 0; i < n; i++)
        trp[i] = (float *)malloc(m * sizeof(float));

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            trp[j][i] = mat[i][j];

    return trp;
}
