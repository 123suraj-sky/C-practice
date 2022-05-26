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
    for (int i = 1; i <= rows; i++)
    {
        // Print trailing spaces
        for (int j = i; j < rows; j++)
            printf(" ");

        // Print hollow pyramid
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == rows || j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


