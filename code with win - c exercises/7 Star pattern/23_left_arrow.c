#include <stdio.h>
void rightArrow(int rows);

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    rightArrow(rows);

    return 0;
}

void rightArrow(int rows)
{
    // Print upper part of the arrow
    for (int i = 1; i < rows; i++)
    {
        // Print trailing spaces
        for (int j = 1; j <= rows - i; j++)
            printf(" ");

        // Print inverted right traingle
        for (int j = i; j <= rows; j++)
            printf("*");
        printf("\n");
    }

    // Print lower part of the arrow
    for (int i = 1; i <= rows; i++)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // Print the right triangle
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}


