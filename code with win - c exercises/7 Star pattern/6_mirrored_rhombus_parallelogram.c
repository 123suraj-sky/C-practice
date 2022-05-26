#include <stdio.h>

void MirroredRhombus();
void MirroredParallelogram();
void print(int m, int n); // base code for pattern (parallelogram). use row = column for rhombus

int main()
{
    int userChoice;
startAgain:
    printf("What do you want to print?\n1) Mirrored Rhombus Pattern\n2) Mirrored Parallelogram pattern\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        MirroredRhombus();
        break;
    case 2:
        MirroredParallelogram();
        break;

    default:
        printf("Please enter valid choice!!!\n\n");
        goto startAgain;
        break;
    }
    return 0;
}

void MirroredRhombus()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    print(rows, rows);
}

void MirroredParallelogram()
{
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    print(rows, columns);
}

void print(int m, int n) // m is rows and n is columns
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j < i; j++)
            printf(" ");

        for (int j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
}