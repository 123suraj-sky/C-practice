#include <stdio.h>

void square();
void rectangle();
void print(int a, int b);

int main()
{
    int userChoice;
startAgain:
    printf("What do you want to print?\n1) Square Pattern\n2) Rectangle pattern\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        square();
        break;
    case 2:
        rectangle();
        break;

    default:
        printf("Please enter valid choice!!!\n\n");
        goto startAgain;
        break;
    }

    return 0;
}

void square()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    print(rows, rows);
}

void rectangle()
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
        for (int j = 0; j < b; j++)
            printf("*");
        printf("\n");
    }
}