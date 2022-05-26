#include <stdio.h>

int main()
{
    printf("*** Program to check whether a number is Perfect number or not  ***\n\n");
    /* What is a Perfect number?
        Perfect number is a postive integer which is equal to the sum of its proper positive divisors
        For ezample: 6 is the first perfect number
        Proper divisors of 6 are 1, 2, 3
            --> A postive proper divisor is a  postive divisor of a number, excluding itself.
        Sum of its porper divisors = 1 + 2 + 3 = 6
        Hence 6 is a perfect number  
        
        Note: A number does not have any proper positive divisor greater than num/2 */

    int i, num, sum = 0;

    printf("Enter a number:-\n");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    // Check whether the sum of proper divisors is equal to num
    if (sum == num)
    {
        printf("%d is a Perfect number", num);
    }
    else
    {
        printf("%d is not a Perfect number", num);
    }
    return 0;
}