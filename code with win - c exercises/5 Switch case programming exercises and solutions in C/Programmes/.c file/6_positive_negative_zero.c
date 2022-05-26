#include <stdio.h>

int main()
{
    printf("*** Programme to check whether a number is positive, negative or zero ***\n\n");
    float a;
    printf("Enter a number\n");
    scanf("%f", &a);

    switch (a > 0)
    {
    // Number is positive
    case 1:
        printf("%f is positive\n", a);
        break;

    // Number 2nd is either negative or zero
    case 0:
        switch (a < 0)
        {
        case 1:
            printf("%f is negative\n", a);
            break;
        case 0:
            printf("%f is zero\n", a);
        }
    }
    return 0;
}