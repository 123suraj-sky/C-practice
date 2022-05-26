#include <stdio.h>

// #define N1
// #define N2
// #define M (N1 + N2)

int main()
{
    int N1, N2, M;
    printf("Enter no. of terms in array %d\n", 1);
    scanf("%d", &N1);
    printf("Enter no. of terms in array %d\n", 2);
    scanf("%d", &N2);
    M = N1 + N2;
    int a[N1], b[N2], c[M], i, index = 0;

    printf("Enter %d integer numbers, for first array\n", N1);
    for (i = 0; i < N1; i++)
        scanf("%d", &a[i]);

    printf("Enter %d integer numbers, for second array\n", N2);
    for (i = 0; i < N2; i++)
        scanf("%d", &b[i]);

    printf("\nMerging a[%d] and b[%d] to form c[%d] ..\n", N1, N2, M);
    for (i = 0; i < N1; i++)
        c[index++] = a[i];
    for (i = 0; i < N2; i++)
        c[index++] = b[i];

    printf("\nElements of c[%d] is ..\n", M);
    for (i = 0; i < M; i++)
        printf("%d ", c[i]);
    printf("\n");

    return 0;
}