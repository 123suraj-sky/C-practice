#include <stdio.h>

void diamond();

int main()
{
    diamond();
    return 0;
}

void diamond()
{
    int rows, stars, spaces;

    printf("Enter rows to print: ");
    scanf("%d", &rows);

    stars = 1, spaces = rows - 1;

    for (int i = 1; i < rows * 2; i++)
    {
        for (int j = 1; j <= spaces; j++)
            printf(" ");

        for (int j = 1; j < stars * 2; j++)
            printf("*");
        printf("\n");

        if (i < rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
}