// Ex 45//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    int vetorA[N], vetorB[N], vetorC[2 * N];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        vetorA[i] = rand() % 11;
        vetorB[i] = rand() % 11;
        printf("\n\nA[%d]=%2d     -     B[%d]=%2d\n", i, vetorA[i], i, vetortB[i]);
    }

    for (int i = 0; i < N; i++)
    {
        vetorC[i] = vetorA[i];
        vetorC[i + N] = vetorB[i];
    }
    printf("\n");
    for (int i = 0; i < 2 * N; i++)
    {
        printf("C[%d]=%2d\n", i, vetorC[i]);
    }
}