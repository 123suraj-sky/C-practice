#include <stdio.h>

void hollowInvertedRightTriangle(int rows);

int main()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    hollowInvertedRightTriangle(rows);

    return 0;
}

void hollowInvertedRightTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // Print hollow pyramid
        for (int j = 1; j <= (rows * 2 - (2 * i - 1)); j++)
        {
            // Print star for first row(i == 1), ith column (j == 1) and for, last column (rows*2-(2*i-1))
            if (i == 1 || j == 1 || j == (rows * 2 - (2 * i - 1)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // Move to next line
    }
}


