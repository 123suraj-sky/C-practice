#include <stdio.h>

void hollowDiamond(int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    hollowDiamond(n);

    return 0;
}

void hollowDiamond(int n)
{
    // Loop to print upper half of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
            printf("*");
        for (int j = 1; j <= (2 * i - 2); j++)
            printf(" ");
        for (int j = i; j <= n; j++)
            printf("*");
        printf("\n");
    }

    // Loop to print lower half of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 2 * i - 2; j < (2 * n - 2); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}