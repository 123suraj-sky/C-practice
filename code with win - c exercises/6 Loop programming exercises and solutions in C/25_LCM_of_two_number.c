#include <stdio.h>

int main()
{
    printf("*** Program to find LCM of two numbers ***\n\n");
    int i, num1, num2, max, lcm = 1;

    printf("Enter any two numbers to find LCM:-\n");
    scanf("%d %d", &num1, &num2);

    // Find maximum between num1 and num2
    max = (num1 > num2) ? num1 : num2;

    // First multiple to be checked
    i = max;

    // Run loop indefinitely till LCM is found
    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            // If i divides both num1 and num2 then i is the lcm
            lcm = i;
            break;
        }

        // If LCM is not found then generate next multiple of max between both numbers
        i += max;
    }

    printf("LCM of %d and %d is %d", num1, num2, lcm);
    return 0;
}