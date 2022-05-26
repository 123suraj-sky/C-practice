#include <stdio.h>

int main()
{
    printf("*** Program to check whether a number is Strong number or not ***\n\n");
    /* What is a Strong number?
        Strong number is a special number whose sum of factorial of digits is equal to teh original number
        For examle: 145 is strong number. Since, 1! + 4! + 5! = 145 */

    int i, originalNum, num, lastDigit, sum;
    long long fact;

    int j;
    for (j = 1; j <= 99999; j++) // We run the loop 99999 times i.e. program asks user 99999 times to check for strong number
    {
        printf("Enter any number:-\n");
        scanf("%d", &num);

        // Copy the value of num to a temporary variable
        originalNum = num;

        sum = 0;

        // Find sum of factorial of digits
        while (num > 0)
        {
            // Get last digit of num
            lastDigit = num % 10;

            // Find factorial of last digit
            fact = 1;
            for (i = 1; i <= lastDigit; i++)
            {
                fact *= i;
            }

            // Add factorial to sum
            sum += fact;

            // Remove last digit
            num /= 10;
        }

        // Check Strong number condition
        if (sum == originalNum)
        {
            printf("%d is Strong Number\n", originalNum);
        }
        else
        {
            printf("%d is not a Stong number\n", originalNum);
        }
    }
    return 0;
}