#include <stdio.h>

void hollowRhombus();
void hollowParallelogram();

int main()
{
    int userChoice;
startAgain:
    printf("What do you want to print?\n1) Hollow Rhombus Pattern\n2) Hollow Parallelogram pattern\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        hollowRhombus();
        break;
    case 2:
        hollowParallelogram();
        break;

    default:
        printf("Please enter valid choice!!!\n\n");
        goto startAgain;
        break;
    }
    return 0;
}

void hollowRhombus()
{
    int rows;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
            printf(" ");

        for (int j = 1; j <= rows; j++)
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}

void hollowParallelogram()
{
    int rows, columns;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
            printf(" ");

        for (int j = 1; j <= columns; j++)
            if (i == 1 || i == rows || j == 1 || j == columns)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}
