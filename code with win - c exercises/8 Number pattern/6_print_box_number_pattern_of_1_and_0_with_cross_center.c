#include <stdio.h>

int main()
{
    int rows, columns;

    // Input rows and columns from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
            if (i == j || (j == (columns + 1) - i))
                printf("1");
            else
                printf("0");
        printf("\n");
    }

    return 0;
}