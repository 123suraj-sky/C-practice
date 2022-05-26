#include <stdio.h>
void reverseMirroredRightTriangle(int rows);

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    reverseMirroredRightTriangle(rows);

    return 0;
}

void reverseMirroredRightTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // print leading spaces
        for (int j = 1; j < i; j++)
            printf(" ");

        // print stars
        for (int j = i; j <= rows; j++)
            printf("*");

        // Move to next line
        printf("\n");
    }
}
