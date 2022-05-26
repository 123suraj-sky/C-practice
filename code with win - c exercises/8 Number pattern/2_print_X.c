#include <stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    // First part of the pattern
    for (int i = 1; i <= num; i++)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
            printf(" ");
        printf("%d", i);
        // Print central spaces
        for (int j = 1; j <= ((num - i) * 2 - 1); j++)
            printf(" ");

        // Don't print last row
        if (i != num)
            printf("%d", i);

        // Moves on to the next row
        printf("\n");
    }

    // Second part of the pattern
    for (int i = num - 1; i >= 1; i--)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
            printf(" ");
        printf("%d", i);

        // Print central spaces
        for (int j = 1; j <= ((num - i) * 2 - 1); j++)
            printf(" ");
        printf("%d", i);

        // Move on to the next line
        printf("\n");
    }

    return 0;
}