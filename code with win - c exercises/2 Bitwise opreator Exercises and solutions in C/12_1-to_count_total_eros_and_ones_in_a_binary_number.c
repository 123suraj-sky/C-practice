#include <stdio.h>

void count1s0s(int N)
{
    // Initialise count variables
    int count0 = 0, count1 = 0;

    // Iterate through all the bits
    while (N > 0)
    {
        // If current bit is 1
        if (N & 1)
            count1++;
        // If current bit is 0
        else
            count0++;
        N >>= 1;
    }

    // Print the count
    printf("Number of 0s in %d is %d\n", N, count0);
    printf("Number of 1s in %d is %d\n", N, count1);
}

void main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    count1s0s(N);
}