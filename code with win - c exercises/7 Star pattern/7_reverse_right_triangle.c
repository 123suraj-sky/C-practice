#include <stdio.h>

void method1(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i; j--)
            printf("*");
        printf("\n");
    }
}

void method2(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // method1(rows);
    method2(rows);
    return 0;
}