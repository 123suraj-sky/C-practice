#include <stdio.h>

void printRightTriangle();

int main()
{
    printRightTriangle();
    return 0;
}

void printRightTriangle()
{

    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j < rows; j++)
            printf(" ");

        for (int j = 1; j <= i; j++)
            if (i == rows || j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}