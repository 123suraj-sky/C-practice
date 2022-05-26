#include <stdio.h>

int main()
{
    int rows, columns, num;
    printf("Enter a number for pattern: ");
    scanf("%d", &num);
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            printf("%d", num);
        printf("\n");
    }

    return 0;
}