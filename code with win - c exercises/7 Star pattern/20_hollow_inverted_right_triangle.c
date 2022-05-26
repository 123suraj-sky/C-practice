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
    // Iterate through rows
    for (int i = 1; i <= rows; i++)
    {
        // Iterate through columns
        for (int j = i; j <= rows; j++)
        {
            // print stars for first row(i==1), first column(j == 1) and last column ( j == rows)
            if (i == 1 || j == i || j == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // Move to next line
    }
}


