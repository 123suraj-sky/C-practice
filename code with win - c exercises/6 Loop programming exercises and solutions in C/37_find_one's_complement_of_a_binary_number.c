
/* What is Ones complement?
    Ones complement of a binary number is defined as value obtained by inverting all binary bits.
    It is the result of swapping all 1s to 0s and all 0s to 1s
    
    For example:
    
                01101110  <-- Original binary value
                10010001  <-- 1's complement*/

#include <stdio.h>
#define SIZE 8

int main()
{
    printf("*** Program to find one's complement of a binary number ***\n\n");

    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error = 0;

    printf("Enter %d bit binary value: \n", SIZE); // Must enter 8 digit in 0 and 1

    // Input binary string from user
    gets(binary);

    // Store all iverted bits of binary value to onesComp
    for (i = 0; i < SIZE; i++)
    {
        if (binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Input");
            error = 1;

            // Exists from the loop
            break;
        }

    }
    
    // Marks the end of onesComp string
        onesComp[SIZE] = '\0';

        // Check if there are binary string contains no error
        if (error == 0)
        {
            printf("Original binary = %s\n", binary);
            printf("Ones complement = %s\n", onesComp);
        }
    return 0;
}