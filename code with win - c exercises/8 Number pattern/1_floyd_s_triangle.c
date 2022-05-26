#include <stdio.h>

int main()
{
    int number, count = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        // Logic to print numbers
        for (int j = 1; j <= i; j++, count++)
            printf("%d\t", count);
        printf("\n");
    }

    return 0;
}