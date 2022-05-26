#include <stdio.h>

void HollowSquare();
void HollowRectangle();

int main()
{
    int userChoice;
startAgain:
    printf("What do you want to print?\n1) Hollow Square Pattern\n2) Hollow Rectangle pattern\n");
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        HollowSquare();
        break;
    case 2:
        HollowRectangle();
        break;

    default:
        printf("Please enter valid choice!!!\n\n");
        goto startAgain;
        break;
    }
    return 0;
}

void HollowSquare()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}

void HollowRectangle()
{
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                printf("*");
            }
            else
                printf(" ");
        printf("\n");
    }
}
