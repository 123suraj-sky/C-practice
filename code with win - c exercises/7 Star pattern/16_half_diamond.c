#include <stdio.h>

void halfDiamond();

int main()
{
    halfDiamond();
    return 0;
}

void halfDiamond()
{
    int columns, lineColumns = 1;
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i < columns * 2; i++)
    {
        for (int j = 1; j <= lineColumns; j++)
            printf("*");

        if (i < columns)
            lineColumns++;
        else
            lineColumns--;
        printf("\n");
    }
}