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

        // Print hollow inverted right triangle
        for (int j = i; j <= rows; j++)
        {
            if (j == i || j == rows || i == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // Move to next line
    }
}



