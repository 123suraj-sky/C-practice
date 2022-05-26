#include <stdio.h>

void pyramid();

int main()
{
    pyramid();
    return 0;
}

void pyramid()
{
    int rows;
    printf("Enter rows to print: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}