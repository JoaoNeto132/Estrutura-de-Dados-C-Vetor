// Ex 42//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 5

int main()
{
    int vetor[N], soma, i, maior, menor;
    float raiz;
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        vetor[i] = rand() % 10;
        printf("vetor[%d] = %2d \n", i, vetor[i]);
        soma = soma + vetor[i];

        if (i == 0)
        {
            maior = vetor[i];
            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }

        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("\n");
    printf("------ Par ------");
    for (i = 0; i < N; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    printf("------ Dobro ------");
    for (i = 0; i < N; i++)
    {
        printf("%d ", vetor[i] * 2);
    }
    printf("\n");
    printf("------ Raiz quadrada ------");
    for (i = 0; i < N; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("%g ", raiz = sqrt(vetor[i]));
        }
    }
    printf("\n");
    printf("------ Soma ------%d \n", soma);
    printf("------ Menor ------%d \n", menor);
    printf("------ Maior ------%d \n", maior);
}