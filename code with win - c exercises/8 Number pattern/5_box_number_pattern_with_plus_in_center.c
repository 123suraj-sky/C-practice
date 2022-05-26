#include <stdio.h>

int main()
{
    int rows, columns, centerRow, centerCol;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    centerRow = (rows + 1) / 2;
    centerCol = (columns + 1) / 2;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            // Print 0 for central rows or columns
            if (centerCol == j || centerRow == i)
            {
                printf("0");
            }
            else if ((columns % 2 == 0 && centerCol + 1 == j) || rows % 2 == 0 && centerRow + 1 == j)
            {
                printf("0");
            }
            else
            {

                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}