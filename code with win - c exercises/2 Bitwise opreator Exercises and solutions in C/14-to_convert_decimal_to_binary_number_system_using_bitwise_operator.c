#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 // size of int in bits

int main()
{
    int num, index, bin[INT_SIZE];

    printf("Enter any number: ");
    scanf("%d", &num);

    index = INT_SIZE - 1;

    while (index >= 0)
    {
        // Store LSB of num to bin
        bin[index] = num & 1;

        // Decrement index
        index--;

        // Right Shift num by 1
        num >>= 1;
    }

    printf("Converted binary: ");
    for (int i = 0; i < INT_SIZE; i++)
        printf("%d", bin[i]);
    printf("\n");
    return 0;
}