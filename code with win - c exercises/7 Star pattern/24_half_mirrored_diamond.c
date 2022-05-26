#include <stdio.h>
void halfMirroredDiamond(int columns);

int main()
{
    int columns;

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    halfMirroredDiamond(columns);

    return 0;
}

void halfMirroredDiamond(int columns)
{
    int spaces = columns - 1, star = 1;

    // Iterate through rows
    for (int i = 1; i < columns * 2; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
            printf(" ");

        // Print stars
        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");

        if (i < columns)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }
}


