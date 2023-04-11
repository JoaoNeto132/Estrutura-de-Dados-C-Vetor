// Ex 46//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetor[N];
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        vetor[i] = rand() % 10;
        printf("vetor[%d] = %2d \n", i, vetor[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            printf("vetor[%d] = %2d \n", i, vetor[i]);
        }
    }
}