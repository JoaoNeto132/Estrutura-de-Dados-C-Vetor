// Ex 44//
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

    int main()
{
    int vetorA[N], vetorB[N], vetorC[2 * N];
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        vetorA[i] = rand() % 10;
        vetorB[i] = rand() % 10;
        printf("A[%d]=%2d  -  B[%d]=%2d \n", i, vetorA[i], i, vetorB[i]);
    }

    for (int i = 0; i < N; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("C[%d]=%2d\n", i, vetorC[i]);
    }
}