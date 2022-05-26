#include <stdio.h>

void Rhombus();
void printParallelogram();

int main()
{
    int userChoice;
startAgain:
    printf("What do you want to print?\n1) Hollow Rhombus Pattern\n2) Hollow Parallelogram pattern\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        Rhombus();
        break;
    case 2:
        printParallelogram();
        break;

    default:
        printf("Please enter valid choice!!!\n\n");
        goto startAgain;
        break;
    }
    return 0;
}

void Rhombus()
{

    int num;

    printf("Enter number of rows: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // Print hollow rhombus
        for (int j = 1; j <= num; j++)
            if (i == 1 || i == num || j == 1 || j == num)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}

void printParallelogram()
{
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // Print hollow parallelogram
        for (int j = 1; j <= columns; j++)
            if (i == 1 || i == rows || j == 1 || j == columns)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}
