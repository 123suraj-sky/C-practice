#include <stdio.h>

int main()
{
    printf("*** Programme to find sum of first n natural numbers ***\n\n");

    int i = 1, sum = 0, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    // for (i = 0; i <= n; i++) --> We comment out this because the question is do it in while loop
    // // for (i = 1; i <= n; i++) --> In this case we start from i = 1 but the result is same
    //                              because in line 9, sum start from 0 and adding 0 to any number gives no change in it
    while ( i <= n)
    {
        sum += i;
        i++;
    }

    printf("The value of sum(1 to %d) is %d\n", n, sum);
    return 0;
}