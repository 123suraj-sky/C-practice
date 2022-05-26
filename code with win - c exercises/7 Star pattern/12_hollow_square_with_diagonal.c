#include <stdio.h>

void hollowSquareWithDiagonal();

void main()
{
    hollowSquareWithDiagonal();
}

void hollowSquareWithDiagonal()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
            if (i == 1 || i == rows || j == 1 || j == rows || i == j || j == (rows - i + 1))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}