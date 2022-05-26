#include <stdio.h>

void Rhombus();
void Parallelogram();
void print(int a, int b);

void main()
{
    int userChoice;
startAgain:
    printf("What do you want to print?\n1) Rhombus Pattern\n2) Parallelogram pattern\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        Rhombus();
        break;
    case 2:
        Parallelogram();
        break;

    default:
        printf("Please enter valid choice!!!\n\n");
        goto startAgain;
        break;
    }
}

void Rhombus()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    print(rows, rows);
}

void Parallelogram()
{
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    print(rows, columns);
}

void print(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= a - i; j++)
            printf(" ");

        for (int j = 1; j <= b; j++)
            printf("*");
        printf("\n");
    }
}