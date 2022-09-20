#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int soma(int v[], int tam)
{
    if (tam == 0)
        return 0;
    else
    {
        if(v[tam - 1] < 0) return 0 + soma(v, tam - 1);
        else return v[tam - 1] + soma(v, tam - 1);
        
    }
}

int main()
{

    int vetor[5] = {-1, 0, 1, 2, 0};
    int n = 5;

    printf("Resultado = %d", soma(vetor, 5));
}